import z from 'zod'

const signupSchema = z.object({
    username: z.string().min(1, "Username is required"),
    firstname: z.string().min(1, "Firstname is required"),
    lastname: z.string().min(1, "Lastname is required"),
    password: z.string().min(1, "Password is required"),
    email: z.string().min(1, "Email is required").email("This is not a valid email")
})

const signinSchema = z.object({
    username: z.string().min(1, "Username is required"),
    password: z.string().min(1, "Password is required"),
})

const updateSchema = z.object({
    username: z.string().min(1, "Username is required"),
    firstname: z.string().min(1, "Firstname is required"),
    lastname: z.string().min(1, "Lastname is required"),
    password: z.string().min(6, "Password must be of atleast 6 characters"),
    email: z.string().min(1, "Email is required"),
})

export {signupSchema, signinSchema, updateSchema};