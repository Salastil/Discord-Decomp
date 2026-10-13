package d0;

/* loaded from: classes.dex */
public final class q {
    public final double a;

    /* renamed from: b, reason: collision with root package name */
    public final double f7393b;

    /* renamed from: c, reason: collision with root package name */
    public final double f7394c;

    /* renamed from: d, reason: collision with root package name */
    public final double f7395d;

    /* renamed from: e, reason: collision with root package name */
    public final double f7396e;

    public q(double d6, double d7, double d8, double d10, double d11) {
        this.a = d6;
        this.f7393b = d7;
        this.f7394c = d8;
        this.f7395d = d10;
        this.f7396e = d11;
        if (Double.isNaN(d7) || Double.isNaN(d8) || Double.isNaN(d10) || Double.isNaN(d11) || Double.isNaN(0.0d) || Double.isNaN(0.0d) || Double.isNaN(d6)) {
            throw new IllegalArgumentException("Parameters cannot be NaN");
        }
        if (d11 < 0.0d || d11 > 1.0d) {
            throw new IllegalArgumentException("Parameter d must be in the range [0..1], was " + d11);
        }
        if (d11 == 0.0d && (d7 == 0.0d || d6 == 0.0d)) {
            throw new IllegalArgumentException("Parameter a or g is zero, the transfer function is constant");
        }
        if (d11 >= 1.0d && d10 == 0.0d) {
            throw new IllegalArgumentException("Parameter c is zero, the transfer function is constant");
        }
        if ((d7 == 0.0d || d6 == 0.0d) && d10 == 0.0d) {
            throw new IllegalArgumentException("Parameter a or g is zero, and c is zero, the transfer function is constant");
        }
        if (d10 < 0.0d) {
            throw new IllegalArgumentException("The transfer function must be increasing");
        }
        if (d7 < 0.0d || d6 < 0.0d) {
            throw new IllegalArgumentException("The transfer function must be positive or increasing");
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof q)) {
            return false;
        }
        q qVar = (q) obj;
        return Double.compare(this.a, qVar.a) == 0 && Double.compare(this.f7393b, qVar.f7393b) == 0 && Double.compare(this.f7394c, qVar.f7394c) == 0 && Double.compare(this.f7395d, qVar.f7395d) == 0 && Double.compare(this.f7396e, qVar.f7396e) == 0 && Double.compare(0.0d, 0.0d) == 0 && Double.compare(0.0d, 0.0d) == 0;
    }

    public final int hashCode() {
        return Double.hashCode(0.0d) + com.discord.chat.bridge.botuikit.a.c(com.discord.chat.bridge.botuikit.a.c(com.discord.chat.bridge.botuikit.a.c(com.discord.chat.bridge.botuikit.a.c(com.discord.chat.bridge.botuikit.a.c(Double.hashCode(this.a) * 31, this.f7393b, 31), this.f7394c, 31), this.f7395d, 31), this.f7396e, 31), 0.0d, 31);
    }

    public final String toString() {
        return "TransferParameters(gamma=" + this.a + ", a=" + this.f7393b + ", b=" + this.f7394c + ", c=" + this.f7395d + ", d=" + this.f7396e + ", e=0.0, f=0.0)";
    }
}
