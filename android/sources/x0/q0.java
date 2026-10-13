package x0;

import android.app.Notification;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import androidx.core.app.Person;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class q0 {
    public final CharSequence a;

    /* renamed from: b, reason: collision with root package name */
    public final long f20208b;

    /* renamed from: c, reason: collision with root package name */
    public final Person f20209c;

    /* renamed from: d, reason: collision with root package name */
    public final Bundle f20210d = new Bundle();

    /* renamed from: e, reason: collision with root package name */
    public String f20211e;

    /* renamed from: f, reason: collision with root package name */
    public Uri f20212f;

    public q0(CharSequence charSequence, long j, Person person) {
        this.a = charSequence;
        this.f20208b = j;
        this.f20209c = person;
    }

    public static Bundle[] a(ArrayList arrayList) {
        Bundle[] bundleArr = new Bundle[arrayList.size()];
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            q0 q0Var = (q0) arrayList.get(i5);
            Person person = q0Var.f20209c;
            Bundle bundle = new Bundle();
            CharSequence charSequence = q0Var.a;
            if (charSequence != null) {
                bundle.putCharSequence("text", charSequence);
            }
            bundle.putLong("time", q0Var.f20208b);
            if (person != null) {
                bundle.putCharSequence("sender", person.a);
                if (Build.VERSION.SDK_INT >= 28) {
                    bundle.putParcelable("sender_person", p0.a(m.h(person)));
                } else {
                    bundle.putBundle("person", person.b());
                }
            }
            String str = q0Var.f20211e;
            if (str != null) {
                bundle.putString("type", str);
            }
            Uri uri = q0Var.f20212f;
            if (uri != null) {
                bundle.putParcelable("uri", uri);
            }
            Bundle bundle2 = q0Var.f20210d;
            if (bundle2 != null) {
                bundle.putBundle("extras", bundle2);
            }
            bundleArr[i5] = bundle;
        }
        return bundleArr;
    }

    /* JADX WARN: Code restructure failed: missing block: B:35:0x00b3, code lost:
    
        r0.add(r12);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static ArrayList b(Parcelable[] parcelableArr) {
        Person person;
        ArrayList arrayList = new ArrayList(parcelableArr.length);
        for (Parcelable parcelable : parcelableArr) {
            if (parcelable instanceof Bundle) {
                Bundle bundle = (Bundle) parcelable;
                q0 q0Var = null;
                try {
                    if (bundle.containsKey("text") && bundle.containsKey("time")) {
                        if (bundle.containsKey("person")) {
                            person = Person.a(bundle.getBundle("person"));
                        } else if (bundle.containsKey("sender_person") && Build.VERSION.SDK_INT >= 28) {
                            person = m.b((android.app.Person) bundle.getParcelable("sender_person"));
                        } else if (bundle.containsKey("sender")) {
                            CharSequence charSequence = bundle.getCharSequence("sender");
                            Person person2 = new Person();
                            person2.a = charSequence;
                            person2.f1481b = null;
                            person2.f1482c = null;
                            person2.f1483d = null;
                            person2.f1484e = false;
                            person2.f1485f = false;
                            person = person2;
                        } else {
                            person = null;
                        }
                        q0 q0Var2 = new q0(bundle.getCharSequence("text"), bundle.getLong("time"), person);
                        if (bundle.containsKey("type") && bundle.containsKey("uri")) {
                            String string = bundle.getString("type");
                            Uri uri = (Uri) bundle.getParcelable("uri");
                            q0Var2.f20211e = string;
                            q0Var2.f20212f = uri;
                        }
                        if (bundle.containsKey("extras")) {
                            q0Var2.f20210d.putAll(bundle.getBundle("extras"));
                        }
                        q0Var = q0Var2;
                    }
                } catch (ClassCastException unused) {
                }
            }
        }
        return arrayList;
    }

    public final Notification.MessagingStyle.Message c() {
        Notification.MessagingStyle.Message a;
        int i5 = Build.VERSION.SDK_INT;
        long j = this.f20208b;
        CharSequence charSequence = this.a;
        Person person = this.f20209c;
        if (i5 >= 28) {
            a = p0.b(charSequence, j, person != null ? m.h(person) : null);
        } else {
            a = o0.a(charSequence, j, person != null ? person.a : null);
        }
        String str = this.f20211e;
        if (str != null) {
            o0.b(a, str, this.f20212f);
        }
        return a;
    }
}
