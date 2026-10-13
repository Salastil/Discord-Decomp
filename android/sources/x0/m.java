package x0;

import android.app.Notification;
import android.app.NotificationChannelGroup;
import android.app.NotificationManager;
import android.app.Person;
import android.graphics.PorterDuff;
import android.graphics.drawable.Icon;
import androidx.core.graphics.drawable.IconCompat;

/* loaded from: classes.dex */
public abstract class m {
    public static void a(Notification.Builder builder, Person person) {
        builder.addPerson(person);
    }

    public static androidx.core.app.Person b(Person person) {
        IconCompat iconCompat;
        CharSequence name = person.getName();
        if (person.getIcon() != null) {
            Icon icon = person.getIcon();
            PorterDuff.Mode mode = IconCompat.k;
            iconCompat = ki.b.l(icon);
        } else {
            iconCompat = null;
        }
        String uri = person.getUri();
        String key = person.getKey();
        boolean isBot = person.isBot();
        boolean isImportant = person.isImportant();
        androidx.core.app.Person person2 = new androidx.core.app.Person();
        person2.a = name;
        person2.f1481b = iconCompat;
        person2.f1482c = uri;
        person2.f1483d = key;
        person2.f1484e = isBot;
        person2.f1485f = isImportant;
        return person2;
    }

    public static String c(NotificationChannelGroup notificationChannelGroup) {
        return notificationChannelGroup.getDescription();
    }

    public static NotificationChannelGroup d(NotificationManager notificationManager, String str) {
        return notificationManager.getNotificationChannelGroup(str);
    }

    public static boolean e(NotificationChannelGroup notificationChannelGroup) {
        return notificationChannelGroup.isBlocked();
    }

    public static void f(NotificationChannelGroup notificationChannelGroup, String str) {
        notificationChannelGroup.setDescription(str);
    }

    public static void g(Notification.Action.Builder builder, int i5) {
        builder.setSemanticAction(i5);
    }

    public static Person h(androidx.core.app.Person person) {
        Person.Builder name = new Person.Builder().setName(person.a);
        IconCompat iconCompat = person.f1481b;
        return name.setIcon(iconCompat != null ? iconCompat.i(null) : null).setUri(person.f1482c).setKey(person.f1483d).setBot(person.f1484e).setImportant(person.f1485f).build();
    }
}
