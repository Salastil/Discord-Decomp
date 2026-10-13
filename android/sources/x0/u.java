package x0;

import android.app.PendingIntent;
import android.os.Bundle;
import androidx.core.app.NotificationCompat$Action;
import androidx.core.app.NotificationCompat$Builder;
import androidx.core.app.RemoteInput;
import androidx.core.graphics.drawable.IconCompat;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class u {
    public final IconCompat a;

    /* renamed from: b, reason: collision with root package name */
    public final CharSequence f20217b;

    /* renamed from: c, reason: collision with root package name */
    public final PendingIntent f20218c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f20219d;

    /* renamed from: e, reason: collision with root package name */
    public final Bundle f20220e;

    /* renamed from: f, reason: collision with root package name */
    public ArrayList f20221f;

    /* renamed from: g, reason: collision with root package name */
    public int f20222g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f20223h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f20224i;
    public boolean j;

    public u(IconCompat iconCompat, CharSequence charSequence, PendingIntent pendingIntent) {
        this(iconCompat, charSequence, pendingIntent, new Bundle());
    }

    public final NotificationCompat$Action a() {
        CharSequence[] charSequenceArr;
        if (this.f20224i && this.f20218c == null) {
            throw new NullPointerException("Contextual Actions must contain a valid PendingIntent");
        }
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        ArrayList arrayList3 = this.f20221f;
        if (arrayList3 != null) {
            Iterator it = arrayList3.iterator();
            while (it.hasNext()) {
                RemoteInput remoteInput = (RemoteInput) it.next();
                if (remoteInput.f1493d || (!((charSequenceArr = remoteInput.f1492c) == null || charSequenceArr.length == 0) || remoteInput.f1496g.isEmpty())) {
                    arrayList2.add(remoteInput);
                } else {
                    arrayList.add(remoteInput);
                }
            }
        }
        return new NotificationCompat$Action(this.a, this.f20217b, this.f20218c, this.f20220e, arrayList2.isEmpty() ? null : (RemoteInput[]) arrayList2.toArray(new RemoteInput[arrayList2.size()]), arrayList.isEmpty() ? null : (RemoteInput[]) arrayList.toArray(new RemoteInput[arrayList.size()]), this.f20219d, this.f20222g, this.f20223h, this.f20224i, this.j);
    }

    public u(int i5, CharSequence charSequence, PendingIntent pendingIntent) {
        this(i5 != 0 ? IconCompat.d(null, "", i5) : null, charSequence, pendingIntent, new Bundle());
    }

    public u(IconCompat iconCompat, CharSequence charSequence, PendingIntent pendingIntent, Bundle bundle) {
        this.f20219d = true;
        this.f20223h = true;
        this.a = iconCompat;
        this.f20217b = NotificationCompat$Builder.e(charSequence);
        this.f20218c = pendingIntent;
        this.f20220e = bundle;
        this.f20221f = null;
        this.f20219d = true;
        this.f20222g = 0;
        this.f20223h = true;
        this.f20224i = false;
        this.j = false;
    }
}
