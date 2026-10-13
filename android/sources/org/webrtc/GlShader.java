package org.webrtc;

import android.opengl.GLES20;
import java.nio.Buffer;
import java.nio.FloatBuffer;

/* loaded from: classes4.dex */
public class GlShader {
    private static final String TAG = "GlShader";
    private int program;

    public GlShader(String str, String str2) {
        int compileShader = compileShader(35633, str);
        int compileShader2 = compileShader(35632, str2);
        int glCreateProgram = GLES20.glCreateProgram();
        this.program = glCreateProgram;
        if (glCreateProgram == 0) {
            throw new RuntimeException(k0.d.i(GLES20.glGetError(), "glCreateProgram() failed. GLES20 error: "));
        }
        GLES20.glAttachShader(glCreateProgram, compileShader);
        GLES20.glAttachShader(this.program, compileShader2);
        GLES20.glLinkProgram(this.program);
        int[] iArr = {0};
        GLES20.glGetProgramiv(this.program, 35714, iArr, 0);
        if (iArr[0] == 1) {
            GLES20.glDeleteShader(compileShader);
            GLES20.glDeleteShader(compileShader2);
            GlUtil.checkNoGLES2Error("Creating GlShader");
        } else {
            Logging.e(TAG, "Could not link program: " + GLES20.glGetProgramInfoLog(this.program));
            throw new RuntimeException(GLES20.glGetProgramInfoLog(this.program));
        }
    }

    private static int compileShader(int i5, String str) {
        int glCreateShader = GLES20.glCreateShader(i5);
        if (glCreateShader == 0) {
            throw new RuntimeException(k0.d.i(GLES20.glGetError(), "glCreateShader() failed. GLES20 error: "));
        }
        GLES20.glShaderSource(glCreateShader, str);
        GLES20.glCompileShader(glCreateShader);
        int[] iArr = {0};
        GLES20.glGetShaderiv(glCreateShader, 35713, iArr, 0);
        if (iArr[0] == 1) {
            GlUtil.checkNoGLES2Error("compileShader");
            return glCreateShader;
        }
        Logging.e(TAG, "Compile error " + GLES20.glGetShaderInfoLog(glCreateShader) + " in shader:\n" + str);
        throw new RuntimeException(GLES20.glGetShaderInfoLog(glCreateShader));
    }

    public int getAttribLocation(String str) {
        int i5 = this.program;
        if (i5 == -1) {
            throw new RuntimeException("The program has been released");
        }
        int glGetAttribLocation = GLES20.glGetAttribLocation(i5, str);
        if (glGetAttribLocation >= 0) {
            return glGetAttribLocation;
        }
        throw new RuntimeException(s4.h.f("Could not locate '", str, "' in program"));
    }

    public int getUniformLocation(String str) {
        int i5 = this.program;
        if (i5 == -1) {
            throw new RuntimeException("The program has been released");
        }
        int glGetUniformLocation = GLES20.glGetUniformLocation(i5, str);
        if (glGetUniformLocation >= 0) {
            return glGetUniformLocation;
        }
        throw new RuntimeException(s4.h.f("Could not locate uniform '", str, "' in program"));
    }

    public void release() {
        Logging.d(TAG, "Deleting shader.");
        int i5 = this.program;
        if (i5 != -1) {
            GLES20.glDeleteProgram(i5);
            this.program = -1;
        }
    }

    public void setVertexAttribArray(String str, int i5, FloatBuffer floatBuffer) {
        setVertexAttribArray(str, i5, 0, floatBuffer);
    }

    public void useProgram() {
        if (this.program == -1) {
            throw new RuntimeException("The program has been released");
        }
        synchronized (EglBase.lock) {
            GLES20.glUseProgram(this.program);
        }
        GlUtil.checkNoGLES2Error("glUseProgram");
    }

    public void setVertexAttribArray(String str, int i5, int i6, FloatBuffer floatBuffer) {
        if (this.program == -1) {
            throw new RuntimeException("The program has been released");
        }
        int attribLocation = getAttribLocation(str);
        GLES20.glEnableVertexAttribArray(attribLocation);
        GLES20.glVertexAttribPointer(attribLocation, i5, 5126, false, i6, (Buffer) floatBuffer);
        GlUtil.checkNoGLES2Error("setVertexAttribArray");
    }
}
