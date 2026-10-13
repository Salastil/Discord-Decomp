package sf;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class k extends cf.a {

    @NotNull
    public static final Parcelable.Creator<k> CREATOR = new c(8);

    /* renamed from: d, reason: collision with root package name */
    public final Bundle f18004d;

    public k(Bundle responseBundle) {
        Intrinsics.checkNotNullParameter(responseBundle, "responseBundle");
        this.f18004d = responseBundle;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int I = ys.l.I(20293, dest);
        ys.l.z(dest, 1, this.f18004d);
        ys.l.J(I, dest);
    }
}
