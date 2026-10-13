package sf;

import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class e extends cf.a {

    @NotNull
    public static final Parcelable.Creator<e> CREATOR = new c(2);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17986d;

    public e(boolean z5) {
        this.f17986d = z5;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int I = ys.l.I(20293, dest);
        ys.l.H(dest, 1, 4);
        dest.writeInt(this.f17986d ? 1 : 0);
        ys.l.J(I, dest);
    }
}
