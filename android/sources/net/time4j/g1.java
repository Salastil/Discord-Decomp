package net.time4j;

/* loaded from: classes3.dex */
public enum g1 implements ks.h {
    /* JADX INFO: Fake field, exist only in values array */
    SECONDS(1.0d),
    /* JADX INFO: Fake field, exist only in values array */
    NANOSECONDS(1.0E-9d);

    private final double length;

    g1(double d6) {
        this.length = d6;
    }

    @Override // ks.h
    public final double getLength() {
        return this.length;
    }
}
