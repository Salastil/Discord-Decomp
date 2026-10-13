package org.webrtc;

import java.nio.ByteBuffer;

/* loaded from: classes4.dex */
public class YuvHelper {
    public static void ABGRToI420(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, int i12, int i13) {
        nativeABGRToI420((ByteBuffer) checkNotNull(byteBuffer, "src"), i5, (ByteBuffer) checkNotNull(byteBuffer2, "dstY"), i6, (ByteBuffer) checkNotNull(byteBuffer3, "dstU"), i10, (ByteBuffer) checkNotNull(byteBuffer4, "dstV"), i11, i12, i13);
    }

    public static void I420Copy(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, int i12, int i13, int i14, int i15, int i16) {
        int i17 = (i12 + 1) / 2;
        int i18 = i13 * i12;
        int i19 = i13 * i14;
        int i20 = (i15 * i17) + i19;
        int i21 = (i15 * i16) + i19;
        int i22 = ((i17 - 1) * i15) + i21 + ((i11 + 1) / 2);
        if (byteBuffer4.capacity() < i22) {
            throw new IllegalArgumentException(a3.e.f(i22, byteBuffer4.capacity(), "Expected destination buffer capacity to be at least ", " was "));
        }
        ByteBuffer slice = byteBuffer4.slice();
        ByteBuffer slice2 = byteBuffer4.slice();
        I420Copy(byteBuffer, i5, byteBuffer2, i6, byteBuffer3, i10, slice, i13, slice2, i15, byteBuffer4.slice(), i15, i11, i12);
    }

    public static void I420Rotate(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, int i12, int i13) {
        checkNotNull(byteBuffer, "srcY");
        checkNotNull(byteBuffer2, "srcU");
        checkNotNull(byteBuffer3, "srcV");
        checkNotNull(byteBuffer4, "dst");
        int i14 = i13 % 180;
        int i15 = i14 == 0 ? i11 : i12;
        int i16 = i14 == 0 ? i12 : i11;
        int i17 = (i16 + 1) / 2;
        int i18 = (i15 + 1) / 2;
        int i19 = i16 * i15;
        int i20 = i17 * i18;
        int i21 = (i20 * 2) + i19;
        if (byteBuffer4.capacity() < i21) {
            throw new IllegalArgumentException(a3.e.f(i21, byteBuffer4.capacity(), "Expected destination buffer capacity to be at least ", " was "));
        }
        int i22 = i20 + i19;
        ByteBuffer slice = byteBuffer4.slice();
        ByteBuffer slice2 = byteBuffer4.slice();
        nativeI420Rotate(byteBuffer, i5, byteBuffer2, i6, byteBuffer3, i10, slice, i15, slice2, i18, byteBuffer4.slice(), i18, i11, i12, i13);
    }

    public static void I420ToNV12(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, int i12, int i13, int i14) {
        int i15 = (i11 + 1) / 2;
        int i16 = i13 * i12;
        int i17 = i13 * i14;
        int i18 = (((i12 + 1) / 2) * i15 * 2) + i17;
        if (byteBuffer4.capacity() < i18) {
            throw new IllegalArgumentException(a3.e.f(i18, byteBuffer4.capacity(), "Expected destination buffer capacity to be at least ", " was "));
        }
        ByteBuffer slice = byteBuffer4.slice();
        I420ToNV12(byteBuffer, i5, byteBuffer2, i6, byteBuffer3, i10, slice, i13, byteBuffer4.slice(), i15 * 2, i11, i12);
    }

    private static <T> T checkNotNull(T t5, String str) {
        if (t5 != null) {
            return t5;
        }
        throw new NullPointerException(k0.d.k(str, " should not be null"));
    }

    public static void copyPlane(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, int i10, int i11) {
        nativeCopyPlane((ByteBuffer) checkNotNull(byteBuffer, "src"), i5, (ByteBuffer) checkNotNull(byteBuffer2, "dst"), i6, i10, i11);
    }

    private static native void nativeABGRToI420(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, int i12, int i13);

    private static native void nativeCopyPlane(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, int i10, int i11);

    private static native void nativeI420Copy(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, ByteBuffer byteBuffer5, int i12, ByteBuffer byteBuffer6, int i13, int i14, int i15);

    private static native void nativeI420Rotate(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, ByteBuffer byteBuffer5, int i12, ByteBuffer byteBuffer6, int i13, int i14, int i15, int i16);

    private static native void nativeI420ToNV12(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, ByteBuffer byteBuffer5, int i12, int i13, int i14);

    public static void I420ToNV12(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, int i12) {
        I420ToNV12(byteBuffer, i5, byteBuffer2, i6, byteBuffer3, i10, byteBuffer4, i11, i12, i11, i12);
    }

    public static void I420ToNV12(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, ByteBuffer byteBuffer5, int i12, int i13, int i14) {
        checkNotNull(byteBuffer, "srcY");
        checkNotNull(byteBuffer2, "srcU");
        checkNotNull(byteBuffer3, "srcV");
        checkNotNull(byteBuffer4, "dstY");
        checkNotNull(byteBuffer5, "dstUV");
        if (i13 > 0 && i14 > 0) {
            nativeI420ToNV12(byteBuffer, i5, byteBuffer2, i6, byteBuffer3, i10, byteBuffer4, i11, byteBuffer5, i12, i13, i14);
            return;
        }
        throw new IllegalArgumentException("I420ToNV12: width and height should not be negative");
    }

    public static void I420Copy(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, int i12) {
        I420Copy(byteBuffer, i5, byteBuffer2, i6, byteBuffer3, i10, byteBuffer4, i11, i12, i11, i12, (i11 + 1) / 2, (i12 + 1) / 2);
    }

    public static void I420Copy(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, int i12, int i13, int i14) {
        I420Copy(byteBuffer, i5, byteBuffer2, i6, byteBuffer3, i10, byteBuffer4, i11, i12, i13, i14, (i13 + 1) / 2, (i14 + 1) / 2);
    }

    public static void I420Copy(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, ByteBuffer byteBuffer5, int i12, ByteBuffer byteBuffer6, int i13, int i14, int i15) {
        checkNotNull(byteBuffer, "srcY");
        checkNotNull(byteBuffer2, "srcU");
        checkNotNull(byteBuffer3, "srcV");
        checkNotNull(byteBuffer4, "dstY");
        checkNotNull(byteBuffer5, "dstU");
        checkNotNull(byteBuffer6, "dstV");
        if (i14 > 0 && i15 > 0) {
            nativeI420Copy(byteBuffer, i5, byteBuffer2, i6, byteBuffer3, i10, byteBuffer4, i11, byteBuffer5, i12, byteBuffer6, i13, i14, i15);
            return;
        }
        throw new IllegalArgumentException("I420Copy: width and height should not be negative");
    }

    public static void I420Rotate(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, ByteBuffer byteBuffer3, int i10, ByteBuffer byteBuffer4, int i11, ByteBuffer byteBuffer5, int i12, ByteBuffer byteBuffer6, int i13, int i14, int i15, int i16) {
        checkNotNull(byteBuffer, "srcY");
        checkNotNull(byteBuffer2, "srcU");
        checkNotNull(byteBuffer3, "srcV");
        checkNotNull(byteBuffer4, "dstY");
        checkNotNull(byteBuffer5, "dstU");
        checkNotNull(byteBuffer6, "dstV");
        nativeI420Rotate(byteBuffer, i5, byteBuffer2, i6, byteBuffer3, i10, byteBuffer4, i11, byteBuffer5, i12, byteBuffer6, i13, i14, i15, i16);
    }
}
