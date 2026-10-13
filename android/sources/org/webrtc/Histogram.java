package org.webrtc;

/* loaded from: classes4.dex */
class Histogram {
    private final long handle;

    private Histogram(long j) {
        this.handle = j;
    }

    public static Histogram createCounts(String str, int i5, int i6, int i10) {
        return new Histogram(nativeCreateCounts(str, i5, i6, i10));
    }

    public static Histogram createEnumeration(String str, int i5) {
        return new Histogram(nativeCreateEnumeration(str, i5));
    }

    private static native void nativeAddSample(long j, int i5);

    private static native long nativeCreateCounts(String str, int i5, int i6, int i10);

    private static native long nativeCreateEnumeration(String str, int i5);

    public void addSample(int i5) {
        nativeAddSample(this.handle, i5);
    }
}
