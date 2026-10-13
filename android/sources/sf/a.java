package sf;

import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import rf.s0;

/* loaded from: classes3.dex */
public final class a extends cf.a {

    @NotNull
    public static final Parcelable.Creator<a> CREATOR = new s0(29);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17984d;

    public a(boolean z5) {
        this.f17984d = z5;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int I = ys.l.I(20293, dest);
        ys.l.H(dest, 1, 4);
        dest.writeInt(this.f17984d ? 1 : 0);
        ys.l.J(I, dest);
    }
}
