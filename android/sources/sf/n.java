package sf;

import android.app.PendingIntent;
import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class n extends cf.a {

    @NotNull
    public static final Parcelable.Creator<n> CREATOR = new c(12);

    /* renamed from: d, reason: collision with root package name */
    public final PendingIntent f18007d;

    public n(PendingIntent pendingIntent) {
        Intrinsics.checkNotNullParameter(pendingIntent, "pendingIntent");
        this.f18007d = pendingIntent;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int I = ys.l.I(20293, dest);
        ys.l.C(dest, 1, this.f18007d, i5);
        ys.l.J(I, dest);
    }
}
