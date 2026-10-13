package rf;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class p0 extends cf.a {
    public static final Parcelable.Creator<p0> CREATOR = new kf.b(17);

    /* renamed from: d, reason: collision with root package name */
    public final bg.w0 f17335d;

    /* renamed from: e, reason: collision with root package name */
    public final bg.w0 f17336e;

    /* renamed from: i, reason: collision with root package name */
    public final bg.w0 f17337i;

    /* renamed from: v, reason: collision with root package name */
    public final int f17338v;

    public p0(bg.w0 w0Var, bg.w0 w0Var2, bg.w0 w0Var3, int i5) {
        this.f17335d = w0Var;
        this.f17336e = w0Var2;
        this.f17337i = w0Var3;
        this.f17338v = i5;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof p0)) {
            return false;
        }
        p0 p0Var = (p0) obj;
        return bf.t.j(this.f17335d, p0Var.f17335d) && bf.t.j(this.f17336e, p0Var.f17336e) && bf.t.j(this.f17337i, p0Var.f17337i) && this.f17338v == p0Var.f17338v;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17335d, this.f17336e, this.f17337i, Integer.valueOf(this.f17338v)});
    }

    public final String toString() {
        bg.w0 w0Var = this.f17335d;
        String b10 = gf.c.b(w0Var == null ? null : w0Var.m());
        bg.w0 w0Var2 = this.f17336e;
        String b11 = gf.c.b(w0Var2 == null ? null : w0Var2.m());
        bg.w0 w0Var3 = this.f17337i;
        String b12 = gf.c.b(w0Var3 != null ? w0Var3.m() : null);
        StringBuilder t5 = a3.e.t("HmacSecretExtension{coseKeyAgreement=", b10, ", saltEnc=", b11, ", saltAuth=");
        t5.append(b12);
        t5.append(", getPinUvAuthProtocol=");
        return k0.d.m(t5, this.f17338v, "}");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        bg.w0 w0Var = this.f17335d;
        ys.l.A(parcel, 1, w0Var == null ? null : w0Var.m());
        bg.w0 w0Var2 = this.f17336e;
        ys.l.A(parcel, 2, w0Var2 == null ? null : w0Var2.m());
        bg.w0 w0Var3 = this.f17337i;
        ys.l.A(parcel, 3, w0Var3 != null ? w0Var3.m() : null);
        ys.l.H(parcel, 4, 4);
        parcel.writeInt(this.f17338v);
        ys.l.J(I, parcel);
    }
}
