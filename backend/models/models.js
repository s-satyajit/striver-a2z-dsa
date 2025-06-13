import mongoose from "mongoose";

const UserSchema = new mongoose.Schema({
  username: {
    type: String,
    required: true,
    minLength: 1,
    MaxLength: 30,
    trim: true,
    lowerCase: true,
    unique: true,
  },
  firstname: {
    type: String,
    requied: true,
    minLength: 1,
    maxLength: 30,
    trim: true,
  },
  lastname: {
    type: String,
    required: true,
    minLength: 1,
    maxLength: 30,
    trim: true,
  },
  password_hash: {
    type: String,
    required: true,
    minLength: 1,
    maxLength: 30,
  },
  email: {
    type: String,
    required: true,
    minLength: 1,
    trim: true,
  },
});

const AccountSchema = new mongoose.Schema({
  userId: {
    type: mongoose.Schema.Types.ObjectId,
    ref: "User",
    required: true,
  },
  balance: {
    type: Number,
    required: true,
  },
});

export const User = mongoose.model("User", UserSchema);
export const Account = mongoose.model("Account", AccountSchema);