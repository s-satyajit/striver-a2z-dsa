import express from "express";
import cors from "cors";
import dotenv from "dotenv";
import mongoose from "mongoose";
import bodyParser from "body-parser";
import accountRouter from "./router/accountRouter.js";
import authRouter from "./router/authRouter.js";
import userRouter from "./router/userRouter.js";
const app = express();
app.use(express.json());
app.use(bodyParser.json());
app.use(cors());
dotenv.config({ path: "./config/.env" });

const PORT = process.env.PORT;

const initialize = async () => {
  try {
    await mongoose.connect(process.env.DB_URI);
    console.log(`MongoDB connected successfully!`);
  } catch (err) {
    console.error(`Error connecting to MongoDB`);
  } finally {
    app.use("/api/v1/user", userRouter);
    app.use("/api/v1/auth", authRouter);
    app.use("/api/v1/account", accountRouter);
  }
};
initialize();

app.listen(PORT, () => {
  console.log(`Server running on port: ${PORT}`);
});
