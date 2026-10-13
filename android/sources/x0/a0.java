package x0;

import android.app.Notification;
import android.app.PendingIntent;
import android.graphics.PorterDuff;
import android.graphics.drawable.Icon;
import android.text.TextUtils;
import androidx.core.graphics.drawable.IconCompat;

/* loaded from: classes.dex */
public abstract class a0 {
    public static b0 a(Notification.BubbleMetadata bubbleMetadata) {
        wn.b bVar;
        if (bubbleMetadata == null) {
            return null;
        }
        if (bubbleMetadata.getShortcutId() != null) {
            String shortcutId = bubbleMetadata.getShortcutId();
            bVar = new wn.b();
            if (TextUtils.isEmpty(shortcutId)) {
                throw new NullPointerException("Bubble requires a non-null shortcut id");
            }
            bVar.f19965d = shortcutId;
        } else {
            PendingIntent intent = bubbleMetadata.getIntent();
            Icon icon = bubbleMetadata.getIcon();
            PorterDuff.Mode mode = IconCompat.k;
            IconCompat l6 = ki.b.l(icon);
            bVar = new wn.b();
            if (intent == null) {
                throw new NullPointerException("Bubble requires non-null pending intent");
            }
            bVar.f19966e = intent;
            bVar.f19967f = l6;
        }
        bVar.a(1, bubbleMetadata.getAutoExpandBubble());
        bVar.f19968g = bubbleMetadata.getDeleteIntent();
        bVar.a(2, bubbleMetadata.isNotificationSuppressed());
        if (bubbleMetadata.getDesiredHeight() != 0) {
            bVar.a = Math.max(bubbleMetadata.getDesiredHeight(), 0);
            bVar.f19963b = 0;
        }
        if (bubbleMetadata.getDesiredHeightResId() != 0) {
            bVar.f19963b = bubbleMetadata.getDesiredHeightResId();
            bVar.a = 0;
        }
        IconCompat iconCompat = (IconCompat) bVar.f19967f;
        PendingIntent pendingIntent = (PendingIntent) bVar.f19966e;
        String str = bVar.f19965d;
        if (str == null && pendingIntent == null) {
            throw new NullPointerException("Must supply pending intent or shortcut to bubble");
        }
        if (str == null && iconCompat == null) {
            throw new NullPointerException("Must supply an icon or shortcut for the bubble");
        }
        PendingIntent pendingIntent2 = (PendingIntent) bVar.f19968g;
        int i5 = bVar.a;
        int i6 = bVar.f19963b;
        int i10 = bVar.f19964c;
        b0 b0Var = new b0();
        b0Var.a = pendingIntent;
        b0Var.f20174c = iconCompat;
        b0Var.f20175d = i5;
        b0Var.f20176e = i6;
        b0Var.f20173b = pendingIntent2;
        b0Var.f20178g = str;
        b0Var.f20177f = i10;
        return b0Var;
    }

    public static Notification.BubbleMetadata b(b0 b0Var) {
        if (b0Var == null) {
            return null;
        }
        String str = b0Var.f20178g;
        Notification.BubbleMetadata.Builder builder = str != null ? new Notification.BubbleMetadata.Builder(str) : new Notification.BubbleMetadata.Builder(b0Var.a, b0Var.f20174c.i(null));
        builder.setDeleteIntent(b0Var.f20173b).setAutoExpandBubble((b0Var.f20177f & 1) != 0).setSuppressNotification((b0Var.f20177f & 2) != 0);
        int i5 = b0Var.f20175d;
        if (i5 != 0) {
            builder.setDesiredHeight(i5);
        }
        int i6 = b0Var.f20176e;
        if (i6 != 0) {
            builder.setDesiredHeightResId(i6);
        }
        return builder.build();
    }
}
