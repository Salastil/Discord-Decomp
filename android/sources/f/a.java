package f;

import android.content.Intent;
import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public final class a implements Parcelable {

    @NotNull
    public static final Parcelable.Creator<a> CREATOR = new android.support.v4.media.a(26);

    /* renamed from: d, reason: collision with root package name */
    public final int f8286d;

    /* renamed from: e, reason: collision with root package name */
    public final Intent f8287e;

    public a(int i5, Intent intent) {
        this.f8286d = i5;
        this.f8287e = intent;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("ActivityResult{resultCode=");
        int i5 = this.f8286d;
        sb2.append(i5 != -1 ? i5 != 0 ? String.valueOf(i5) : "RESULT_CANCELED" : "RESULT_OK");
        sb2.append(", data=");
        sb2.append(this.f8287e);
        sb2.append('}');
        return sb2.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        dest.writeInt(this.f8286d);
        Intent intent = this.f8287e;
        dest.writeInt(intent == null ? 0 : 1);
        if (intent != null) {
            intent.writeToParcel(dest, i5);
        }
    }
}
