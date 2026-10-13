package sf;

import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class d extends cf.a {

    @NotNull
    public static final Parcelable.Creator<d> CREATOR = new c(1);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17985d;

    public d(boolean z5) {
        this.f17985d = z5;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int I = ys.l.I(20293, dest);
        ys.l.H(dest, 1, 4);
        dest.writeInt(this.f17985d ? 1 : 0);
        ys.l.J(I, dest);
    }
}
