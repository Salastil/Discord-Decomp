package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class h0 extends cf.a {

    @NonNull
    public static final Parcelable.Creator<h0> CREATOR = new s0(2);

    /* renamed from: d, reason: collision with root package name */
    public final f0 f17309d;

    /* renamed from: e, reason: collision with root package name */
    public final String f17310e;

    static {
        new h0("supported", null);
        new h0("not-supported", null);
    }

    public h0(String str, String str2) {
        bf.t.g(str);
        try {
            this.f17309d = f0.a(str);
            this.f17310e = str2;
        } catch (g0 e9) {
            throw new IllegalArgumentException(e9);
        }
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof h0)) {
            return false;
        }
        h0 h0Var = (h0) obj;
        return bg.b.h(this.f17309d, h0Var.f17309d) && bg.b.h(this.f17310e, h0Var.f17310e);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17309d, this.f17310e});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.D(this.f17309d.f17302d, parcel, 2);
        ys.l.D(this.f17310e, parcel, 3);
        ys.l.J(I, parcel);
    }
}
