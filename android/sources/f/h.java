package f;

import android.content.Intent;
import android.content.IntentSender;
import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public final class h implements Parcelable {

    @NotNull
    public static final Parcelable.Creator<h> CREATOR = new android.support.v4.media.a(27);

    /* renamed from: d, reason: collision with root package name */
    public final IntentSender f8298d;

    /* renamed from: e, reason: collision with root package name */
    public final Intent f8299e;

    /* renamed from: i, reason: collision with root package name */
    public final int f8300i;

    /* renamed from: v, reason: collision with root package name */
    public final int f8301v;

    public h(IntentSender intentSender, Intent intent, int i5, int i6) {
        Intrinsics.checkNotNullParameter(intentSender, "intentSender");
        this.f8298d = intentSender;
        this.f8299e = intent;
        this.f8300i = i5;
        this.f8301v = i6;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        dest.writeParcelable(this.f8298d, i5);
        dest.writeParcelable(this.f8299e, i5);
        dest.writeInt(this.f8300i);
        dest.writeInt(this.f8301v);
    }
}
