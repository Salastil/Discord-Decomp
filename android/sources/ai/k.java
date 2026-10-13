package ai;

import android.os.Parcel;

/* loaded from: classes3.dex */
public class k extends RuntimeException {
    public /* synthetic */ k() {
        super("Message was missing required fields.  (Lite runtime could not determine which fields were missing).");
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public k(String str, Parcel parcel) {
        super(r2.toString());
        int dataPosition = parcel.dataPosition();
        int dataSize = parcel.dataSize();
        int length = String.valueOf(str).length();
        StringBuilder sb2 = new StringBuilder(length + 13 + String.valueOf(dataPosition).length() + 6 + String.valueOf(dataSize).length());
        sb2.append(str);
        sb2.append(" Parcel: pos=");
        sb2.append(dataPosition);
        sb2.append(" size=");
        sb2.append(dataSize);
    }

    public k(Exception exc) {
        super("An exception was thrown by an Executor", exc);
    }

    public k(String str) {
        super("Invalid request builder: ".concat(str));
    }

    public k(Integer num) {
        super("Invalid size: " + num.toString());
    }
}
