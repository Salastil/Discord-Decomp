package kf;

import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import ys.l;

/* loaded from: classes3.dex */
public final class a extends cf.a {

    @NotNull
    public static final Parcelable.Creator<a> CREATOR = new b(0);

    /* renamed from: d, reason: collision with root package name */
    public final int f13367d;

    public a(int i5) {
        this.f13367d = i5;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int I = l.I(20293, dest);
        l.H(dest, 1, 4);
        dest.writeInt(this.f13367d);
        l.J(I, dest);
    }
}
