import express from "express";
import jwt from "jsonwebtoken";
import {
  signupSchema,
  signinSchema,
  updateSchema,
} from "../schemas/userSchemas";
import { User } from "../models/models";

const router = express.Router();

router.post("/signup", async (req, res) => {
    const signupResult = signupSchema.safeParse(req.body)
    if(!signupResult.success) {
        res.status(400).json({
            message: `Validation failed`,
            error: signupResult.error.errors,
        })
    }
    const {username, firstname, lastname, password, email} = signupResult.data
    const existing = await User.findOne({username})
    if(existing) res.status(400).json({msg: `Username already exists`})
    try {
        const user = new User({
            username,
            firstname,
            lastname,
            email,
        })
    } catch (err) {
        
    }
});

export default router;
