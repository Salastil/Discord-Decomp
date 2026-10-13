package rf;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class u0 extends cf.a {
    public static final Parcelable.Creator<u0> CREATOR = new s0(10);

    /* renamed from: d, reason: collision with root package name */
    public final bg.w0 f17359d;

    /* renamed from: e, reason: collision with root package name */
    public final bg.w0 f17360e;

    public u0(bg.w0 w0Var, bg.w0 w0Var2) {
        this.f17359d = w0Var;
        this.f17360e = w0Var2;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof u0)) {
            return false;
        }
        u0 u0Var = (u0) obj;
        return bf.t.j(this.f17359d, u0Var.f17359d) && bf.t.j(this.f17360e, u0Var.f17360e);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17359d, this.f17360e});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        bg.w0 w0Var = this.f17359d;
        ys.l.A(parcel, 1, w0Var == null ? null : w0Var.m());
        bg.w0 w0Var2 = this.f17360e;
        ys.l.A(parcel, 2, w0Var2 != null ? w0Var2.m() : null);
        ys.l.J(I, parcel);
    }
}
