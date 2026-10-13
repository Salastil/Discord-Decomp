package x0;

import android.app.Notification;
import android.app.PendingIntent;
import android.content.Context;
import android.graphics.PorterDuff;
import android.graphics.drawable.Icon;
import android.os.Build;
import android.os.Bundle;
import android.text.SpannableStringBuilder;
import android.text.style.ForegroundColorSpan;
import android.util.Log;
import androidx.core.app.NotificationCompat$Action;
import androidx.core.app.Person;
import androidx.core.graphics.drawable.IconCompat;
import com.discord.R;

/* loaded from: classes.dex */
public final class i0 extends v0 {

    /* renamed from: e, reason: collision with root package name */
    public int f20196e;

    /* renamed from: f, reason: collision with root package name */
    public Person f20197f;

    /* renamed from: g, reason: collision with root package name */
    public PendingIntent f20198g;

    /* renamed from: h, reason: collision with root package name */
    public PendingIntent f20199h;

    /* renamed from: i, reason: collision with root package name */
    public PendingIntent f20200i;
    public boolean j;
    public Integer k;

    /* renamed from: l, reason: collision with root package name */
    public Integer f20201l;

    /* renamed from: m, reason: collision with root package name */
    public IconCompat f20202m;

    /* renamed from: n, reason: collision with root package name */
    public CharSequence f20203n;

    @Override // x0.v0
    public final void a(Bundle bundle) {
        super.a(bundle);
        bundle.putInt("android.callType", this.f20196e);
        bundle.putBoolean("android.callIsVideo", this.j);
        Person person = this.f20197f;
        if (person != null) {
            if (Build.VERSION.SDK_INT >= 28) {
                bundle.putParcelable("android.callPerson", g0.b(m.h(person)));
            } else {
                bundle.putParcelable("android.callPersonCompat", person.b());
            }
        }
        IconCompat iconCompat = this.f20202m;
        if (iconCompat != null) {
            bundle.putParcelable("android.verificationIcon", f0.a(iconCompat.i(this.a.a)));
        }
        bundle.putCharSequence("android.verificationText", this.f20203n);
        bundle.putParcelable("android.answerIntent", this.f20198g);
        bundle.putParcelable("android.declineIntent", this.f20199h);
        bundle.putParcelable("android.hangUpIntent", this.f20200i);
        Integer num = this.k;
        if (num != null) {
            bundle.putInt("android.answerColor", num.intValue());
        }
        Integer num2 = this.f20201l;
        if (num2 != null) {
            bundle.putInt("android.declineColor", num2.intValue());
        }
    }

    @Override // x0.v0
    public final void b(ad.d0 d0Var) {
        Notification.Builder builder = (Notification.Builder) d0Var.f318i;
        int i5 = Build.VERSION.SDK_INT;
        String str = null;
        r5 = null;
        Notification.CallStyle a = null;
        if (i5 < 31) {
            Person person = this.f20197f;
            builder.setContentTitle(person != null ? person.a : null);
            Bundle bundle = this.a.C;
            CharSequence charSequence = (bundle == null || !bundle.containsKey("android.text")) ? null : this.a.C.getCharSequence("android.text");
            if (charSequence == null) {
                int i6 = this.f20196e;
                if (i6 == 1) {
                    str = this.a.a.getResources().getString(R.string.call_notification_incoming_text);
                } else if (i6 == 2) {
                    str = this.a.a.getResources().getString(R.string.call_notification_ongoing_text);
                } else if (i6 == 3) {
                    str = this.a.a.getResources().getString(R.string.call_notification_screening_text);
                }
                charSequence = str;
            }
            builder.setContentText(charSequence);
            Person person2 = this.f20197f;
            if (person2 != null) {
                IconCompat iconCompat = person2.f1481b;
                if (iconCompat != null) {
                    f0.b(builder, iconCompat.i(this.a.a));
                }
                if (i5 >= 28) {
                    Person person3 = this.f20197f;
                    person3.getClass();
                    g0.a(builder, m.h(person3));
                } else {
                    e0.a(builder, this.f20197f.f1482c);
                }
            }
            e0.b(builder, "call");
            return;
        }
        int i10 = this.f20196e;
        if (i10 == 1) {
            Person person4 = this.f20197f;
            person4.getClass();
            a = h0.a(m.h(person4), this.f20199h, this.f20198g);
        } else if (i10 == 2) {
            Person person5 = this.f20197f;
            person5.getClass();
            a = h0.b(m.h(person5), this.f20200i);
        } else if (i10 == 3) {
            Person person6 = this.f20197f;
            person6.getClass();
            a = h0.c(m.h(person6), this.f20200i, this.f20198g);
        } else if (Log.isLoggable("NotifCompat", 3)) {
            Log.d("NotifCompat", "Unrecognized call type in CallStyle: " + String.valueOf(this.f20196e));
        }
        if (a != null) {
            a.setBuilder(builder);
            Integer num = this.k;
            if (num != null) {
                h0.d(a, num.intValue());
            }
            Integer num2 = this.f20201l;
            if (num2 != null) {
                h0.e(a, num2.intValue());
            }
            h0.h(a, this.f20203n);
            IconCompat iconCompat2 = this.f20202m;
            if (iconCompat2 != null) {
                h0.g(a, iconCompat2.i(this.a.a));
            }
            h0.f(a, this.j);
        }
    }

    @Override // x0.v0
    public final String e() {
        return "androidx.core.app.NotificationCompat$CallStyle";
    }

    @Override // x0.v0
    public final void f(Bundle bundle) {
        super.f(bundle);
        this.f20196e = bundle.getInt("android.callType");
        this.j = bundle.getBoolean("android.callIsVideo");
        if (Build.VERSION.SDK_INT >= 28 && bundle.containsKey("android.callPerson")) {
            this.f20197f = m.b(u3.e.c(bundle.getParcelable("android.callPerson")));
        } else if (bundle.containsKey("android.callPersonCompat")) {
            this.f20197f = Person.a(bundle.getBundle("android.callPersonCompat"));
        }
        if (bundle.containsKey("android.verificationIcon")) {
            Icon icon = (Icon) bundle.getParcelable("android.verificationIcon");
            PorterDuff.Mode mode = IconCompat.k;
            this.f20202m = ki.b.l(icon);
        } else if (bundle.containsKey("android.verificationIconCompat")) {
            this.f20202m = IconCompat.a(bundle.getBundle("android.verificationIconCompat"));
        }
        this.f20203n = bundle.getCharSequence("android.verificationText");
        this.f20198g = (PendingIntent) bundle.getParcelable("android.answerIntent");
        this.f20199h = (PendingIntent) bundle.getParcelable("android.declineIntent");
        this.f20200i = (PendingIntent) bundle.getParcelable("android.hangUpIntent");
        this.k = bundle.containsKey("android.answerColor") ? Integer.valueOf(bundle.getInt("android.answerColor")) : null;
        this.f20201l = bundle.containsKey("android.declineColor") ? Integer.valueOf(bundle.getInt("android.declineColor")) : null;
    }

    public final NotificationCompat$Action g(int i5, int i6, Integer num, int i10, PendingIntent pendingIntent) {
        if (num == null) {
            num = Integer.valueOf(this.a.a.getColor(i10));
        }
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder();
        spannableStringBuilder.append((CharSequence) this.a.a.getResources().getString(i6));
        spannableStringBuilder.setSpan(new ForegroundColorSpan(num.intValue()), 0, spannableStringBuilder.length(), 18);
        Context context = this.a.a;
        PorterDuff.Mode mode = IconCompat.k;
        context.getClass();
        NotificationCompat$Action a = new u(IconCompat.d(context.getResources(), context.getPackageName(), i5), spannableStringBuilder, pendingIntent).a();
        a.a.putBoolean("key_action_priority", true);
        return a;
    }
}
