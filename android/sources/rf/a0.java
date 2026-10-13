package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class a0 implements Parcelable {

    /* JADX INFO: Fake field, exist only in values array */
    a0 EF5;

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ a0[] f17279d = {new a0("PUBLIC_KEY", 0)};

    @NonNull
    public static final Parcelable.Creator<a0> CREATOR = new kf.b(26);

    public static a0 a(String str) {
        for (a0 a0Var : values()) {
            a0Var.getClass();
            if (str.equals("public-key")) {
                return a0Var;
            }
        }
        throw new z(s4.h.f("PublicKeyCredentialType ", str, " not supported"));
    }

    @NonNull
    public static a0 valueOf(@NonNull String str) {
        return (a0) Enum.valueOf(a0.class, str);
    }

    @NonNull
    public static a0[] values() {
        return (a0[]) f17279d.clone();
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // java.lang.Enum
    public final String toString() {
        return "public-key";
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString("public-key");
    }
}
