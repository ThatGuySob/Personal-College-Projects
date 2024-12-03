import { initializeApp } from "firebase/app";
import { getDatabase, ref } from "firebase/database";

const firebaseConfig = {
  apiKey: "AIzaSyDz-QBTDYxsi9w2a25BUtbWjsce5d1ZuSE",
  authDomain: "microbitnoisereader.firebaseapp.com",
  databaseURL: "https://microbitnoisereader-default-rtdb.firebaseio.com",
  projectId: "microbitnoisereader",
  storageBucket: "microbitnoisereader.appspot.com",
  messagingSenderId: "941284038121",
  appId: "1:941284038121:web:4a34336363f518d2fc2778",
  measurementId: "G-BNW3Y4X54H"
};

const app = initializeApp(firebaseConfig);

}