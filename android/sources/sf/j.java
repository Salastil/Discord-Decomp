package sf;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class j extends cf.a {

    @NotNull
    public static final Parcelable.Creator<j> CREATOR = new c(7);

    /* renamed from: d, reason: collision with root package name */
    public final Bundle f18003d;

    public j(Bundle responseBundle) {
        Intrinsics.checkNotNullParameter(responseBundle, "responseBundle");
        this.f18003d = responseBundle;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int I = ys.l.I(20293, dest);
        ys.l.z(dest, 1, this.f18003d);
        ys.l.J(I, dest);
    }
}
