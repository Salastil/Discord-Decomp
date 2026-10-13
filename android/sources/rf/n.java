package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class n implements Parcelable {

    @NonNull
    public static final Parcelable.Creator<n> CREATOR = new s0(16);

    /* renamed from: d, reason: collision with root package name */
    public final Enum f17330d;

    /* JADX WARN: Multi-variable type inference failed */
    public n(a aVar) {
        this.f17330d = (Enum) aVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static n a(int i5) {
        c0 c0Var;
        if (i5 == -262) {
            c0Var = c0.RS1;
        } else {
            c0[] values = c0.values();
            int length = values.length;
            int i6 = 0;
            while (true) {
                if (i6 >= length) {
                    for (o oVar : o.values()) {
                        if (oVar.f17333d == i5) {
                            c0Var = oVar;
                        }
                    }
                    throw new m(s4.h.e(i5, "Algorithm with COSE value ", " not supported"));
                }
                c0 c0Var2 = values[i6];
                if (c0Var2.f17288d == i5) {
                    c0Var = c0Var2;
                    break;
                }
                i6++;
            }
        }
        return new n(c0Var);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Enum, rf.a] */
    /* JADX WARN: Type inference failed for: r2v3, types: [java.lang.Enum, rf.a] */
    public final boolean equals(Object obj) {
        return (obj instanceof n) && this.f17330d.a() == ((n) obj).f17330d.a();
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17330d});
    }

    public final String toString() {
        return s4.h.f("COSEAlgorithmIdentifier{algorithm=", String.valueOf(this.f17330d), "}");
    }

    /* JADX WARN: Type inference failed for: r2v1, types: [java.lang.Enum, rf.a] */
    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f17330d.a());
    }
}
