package androidx.core.app;

import ad.d0;
import android.app.Notification;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Iterator;
import x0.l0;
import x0.m;
import x0.m0;
import x0.n0;
import x0.q0;
import x0.v0;

/* loaded from: classes.dex */
public final class NotificationCompat$MessagingStyle extends v0 {

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f1470e = new ArrayList();

    /* renamed from: f, reason: collision with root package name */
    public final ArrayList f1471f = new ArrayList();

    /* renamed from: g, reason: collision with root package name */
    public Person f1472g;

    /* renamed from: h, reason: collision with root package name */
    public CharSequence f1473h;

    /* renamed from: i, reason: collision with root package name */
    public Boolean f1474i;

    public NotificationCompat$MessagingStyle() {
    }

    @Override // x0.v0
    public final void a(Bundle bundle) {
        super.a(bundle);
        bundle.putCharSequence("android.selfDisplayName", this.f1472g.a);
        bundle.putBundle("android.messagingStyleUser", this.f1472g.b());
        bundle.putCharSequence("android.hiddenConversationTitle", this.f1473h);
        if (this.f1473h != null && this.f1474i.booleanValue()) {
            bundle.putCharSequence("android.conversationTitle", this.f1473h);
        }
        ArrayList arrayList = this.f1470e;
        if (!arrayList.isEmpty()) {
            bundle.putParcelableArray("android.messages", q0.a(arrayList));
        }
        ArrayList arrayList2 = this.f1471f;
        if (!arrayList2.isEmpty()) {
            bundle.putParcelableArray("android.messages.historic", q0.a(arrayList2));
        }
        Boolean bool = this.f1474i;
        if (bool != null) {
            bundle.putBoolean("android.isGroupConversation", bool.booleanValue());
        }
    }

    @Override // x0.v0
    public final void b(d0 d0Var) {
        Notification.MessagingStyle b10;
        NotificationCompat$Builder notificationCompat$Builder = this.a;
        boolean z5 = false;
        if (notificationCompat$Builder == null || notificationCompat$Builder.a.getApplicationInfo().targetSdkVersion >= 28 || this.f1474i != null) {
            Boolean bool = this.f1474i;
            if (bool != null) {
                z5 = bool.booleanValue();
            }
        } else if (this.f1473h != null) {
            z5 = true;
        }
        this.f1474i = Boolean.valueOf(z5);
        if (Build.VERSION.SDK_INT >= 28) {
            Person person = this.f1472g;
            person.getClass();
            b10 = n0.a(m.h(person));
        } else {
            b10 = l0.b(this.f1472g.a);
        }
        Iterator it = this.f1470e.iterator();
        while (it.hasNext()) {
            l0.a(b10, ((q0) it.next()).c());
        }
        if (Build.VERSION.SDK_INT >= 26) {
            Iterator it2 = this.f1471f.iterator();
            while (it2.hasNext()) {
                m0.a(b10, ((q0) it2.next()).c());
            }
        }
        if (this.f1474i.booleanValue() || Build.VERSION.SDK_INT >= 28) {
            l0.c(b10, this.f1473h);
        }
        if (Build.VERSION.SDK_INT >= 28) {
            n0.b(b10, this.f1474i.booleanValue());
        }
        b10.setBuilder((Notification.Builder) d0Var.f318i);
    }

    @Override // x0.v0
    public final void c(Bundle bundle) {
        super.c(bundle);
        bundle.remove("android.messagingStyleUser");
        bundle.remove("android.selfDisplayName");
        bundle.remove("android.conversationTitle");
        bundle.remove("android.hiddenConversationTitle");
        bundle.remove("android.messages");
        bundle.remove("android.messages.historic");
        bundle.remove("android.isGroupConversation");
    }

    @Override // x0.v0
    public final String e() {
        return "androidx.core.app.NotificationCompat$MessagingStyle";
    }

    @Override // x0.v0
    public final void f(Bundle bundle) {
        super.f(bundle);
        ArrayList arrayList = this.f1470e;
        arrayList.clear();
        if (bundle.containsKey("android.messagingStyleUser")) {
            this.f1472g = Person.a(bundle.getBundle("android.messagingStyleUser"));
        } else {
            String string = bundle.getString("android.selfDisplayName");
            Person person = new Person();
            person.a = string;
            person.f1481b = null;
            person.f1482c = null;
            person.f1483d = null;
            person.f1484e = false;
            person.f1485f = false;
            this.f1472g = person;
        }
        CharSequence charSequence = bundle.getCharSequence("android.conversationTitle");
        this.f1473h = charSequence;
        if (charSequence == null) {
            this.f1473h = bundle.getCharSequence("android.hiddenConversationTitle");
        }
        Parcelable[] parcelableArray = bundle.getParcelableArray("android.messages");
        if (parcelableArray != null) {
            arrayList.addAll(q0.b(parcelableArray));
        }
        Parcelable[] parcelableArray2 = bundle.getParcelableArray("android.messages.historic");
        if (parcelableArray2 != null) {
            this.f1471f.addAll(q0.b(parcelableArray2));
        }
        if (bundle.containsKey("android.isGroupConversation")) {
            this.f1474i = Boolean.valueOf(bundle.getBoolean("android.isGroupConversation"));
        }
    }

    public NotificationCompat$MessagingStyle(Person person) {
        if (!TextUtils.isEmpty(person.a)) {
            this.f1472g = person;
            return;
        }
        throw new IllegalArgumentException("User's name must not be empty.");
    }
}
