package ze;

import com.google.android.gms.common.api.Status;

/* loaded from: classes3.dex */
public class e extends Exception {

    /* renamed from: d, reason: collision with root package name */
    public final Status f21197d;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public e(Status status) {
        super(r4.toString());
        int i5 = status.f5657d;
        String str = status.f5658e;
        str = str == null ? "" : str;
        StringBuilder sb2 = new StringBuilder(String.valueOf(i5).length() + 2 + String.valueOf(str).length());
        sb2.append(i5);
        sb2.append(": ");
        sb2.append(str);
        this.f21197d = status;
    }
}
