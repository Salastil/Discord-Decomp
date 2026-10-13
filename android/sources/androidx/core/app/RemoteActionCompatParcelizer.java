package androidx.core.app;

import android.app.PendingIntent;
import android.os.Parcel;
import android.text.TextUtils;
import androidx.core.graphics.drawable.IconCompat;
import o3.a;
import o3.b;
import o3.c;

/* loaded from: classes.dex */
public class RemoteActionCompatParcelizer {
    public static RemoteActionCompat read(a aVar) {
        RemoteActionCompat remoteActionCompat = new RemoteActionCompat();
        c cVar = remoteActionCompat.a;
        boolean z5 = true;
        if (aVar.e(1)) {
            cVar = aVar.h();
        }
        remoteActionCompat.a = (IconCompat) cVar;
        CharSequence charSequence = remoteActionCompat.f1486b;
        if (aVar.e(2)) {
            charSequence = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(((b) aVar).f15734e);
        }
        remoteActionCompat.f1486b = charSequence;
        CharSequence charSequence2 = remoteActionCompat.f1487c;
        if (aVar.e(3)) {
            charSequence2 = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(((b) aVar).f15734e);
        }
        remoteActionCompat.f1487c = charSequence2;
        remoteActionCompat.f1488d = (PendingIntent) aVar.g(remoteActionCompat.f1488d, 4);
        boolean z6 = remoteActionCompat.f1489e;
        if (aVar.e(5)) {
            z6 = ((b) aVar).f15734e.readInt() != 0;
        }
        remoteActionCompat.f1489e = z6;
        boolean z7 = remoteActionCompat.f1490f;
        if (!aVar.e(6)) {
            z5 = z7;
        } else if (((b) aVar).f15734e.readInt() == 0) {
            z5 = false;
        }
        remoteActionCompat.f1490f = z5;
        return remoteActionCompat;
    }

    public static void write(RemoteActionCompat remoteActionCompat, a aVar) {
        aVar.getClass();
        IconCompat iconCompat = remoteActionCompat.a;
        aVar.i(1);
        aVar.l(iconCompat);
        CharSequence charSequence = remoteActionCompat.f1486b;
        aVar.i(2);
        Parcel parcel = ((b) aVar).f15734e;
        TextUtils.writeToParcel(charSequence, parcel, 0);
        CharSequence charSequence2 = remoteActionCompat.f1487c;
        aVar.i(3);
        TextUtils.writeToParcel(charSequence2, parcel, 0);
        aVar.k(remoteActionCompat.f1488d, 4);
        boolean z5 = remoteActionCompat.f1489e;
        aVar.i(5);
        parcel.writeInt(z5 ? 1 : 0);
        boolean z6 = remoteActionCompat.f1490f;
        aVar.i(6);
        parcel.writeInt(z6 ? 1 : 0);
    }
}
