package sf;

import android.app.PendingIntent;
import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class f extends cf.a {

    @NotNull
    public static final Parcelable.Creator<f> CREATOR = new c(3);

    /* renamed from: d, reason: collision with root package name */
    public final PendingIntent f17987d;

    /* renamed from: e, reason: collision with root package name */
    public final h f17988e;

    public f(PendingIntent pendingIntent, h hVar) {
        this.f17987d = pendingIntent;
        this.f17988e = hVar;
        if (pendingIntent == null && hVar == null) {
            throw new IllegalArgumentException("pendingIntent or createCredentialResponse must be specified.");
        }
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int I = ys.l.I(20293, dest);
        ys.l.C(dest, 1, this.f17987d, i5);
        ys.l.C(dest, 2, this.f17988e, i5);
        ys.l.J(I, dest);
    }
}
