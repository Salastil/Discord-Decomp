package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class x extends cf.a {

    @NonNull
    public static final Parcelable.Creator<x> CREATOR = new kf.b(23);

    /* renamed from: d, reason: collision with root package name */
    public final a0 f17377d;

    /* renamed from: e, reason: collision with root package name */
    public final n f17378e;

    public x(String str, int i5) {
        bf.t.g(str);
        try {
            this.f17377d = a0.a(str);
            try {
                this.f17378e = n.a(i5);
            } catch (m e9) {
                throw new IllegalArgumentException(e9);
            }
        } catch (z e10) {
            throw new IllegalArgumentException(e10);
        }
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof x)) {
            return false;
        }
        x xVar = (x) obj;
        return this.f17377d.equals(xVar.f17377d) && this.f17378e.equals(xVar.f17378e);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17377d, this.f17378e});
    }

    public final String toString() {
        return s4.h.g("PublicKeyCredentialParameters{\n type=", String.valueOf(this.f17377d), ", \n algorithm=", String.valueOf(this.f17378e), "\n }");
    }

    /* JADX WARN: Type inference failed for: r0v3, types: [java.lang.Enum, rf.a] */
    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        this.f17377d.getClass();
        ys.l.D("public-key", parcel, 2);
        ys.l.B(parcel, 3, Integer.valueOf(this.f17378e.f17330d.a()));
        ys.l.J(I, parcel);
    }
}
