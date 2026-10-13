package x0;

import android.app.Notification;
import android.app.PendingIntent;
import android.graphics.PorterDuff;
import android.graphics.drawable.Icon;
import androidx.core.graphics.drawable.IconCompat;

/* loaded from: classes.dex */
public abstract class z {
    public static b0 a(Notification.BubbleMetadata bubbleMetadata) {
        int i5;
        if (bubbleMetadata == null || bubbleMetadata.getIntent() == null) {
            return null;
        }
        PendingIntent intent = bubbleMetadata.getIntent();
        Icon icon = bubbleMetadata.getIcon();
        PorterDuff.Mode mode = IconCompat.k;
        IconCompat l6 = ki.b.l(icon);
        if (intent == null) {
            throw new NullPointerException("Bubble requires non-null pending intent");
        }
        boolean autoExpandBubble = bubbleMetadata.getAutoExpandBubble();
        PendingIntent deleteIntent = bubbleMetadata.getDeleteIntent();
        int i6 = bubbleMetadata.isNotificationSuppressed() ? (autoExpandBubble ? 1 : 0) | 2 : (autoExpandBubble ? 1 : 0) & (-3);
        int i10 = 0;
        int max = bubbleMetadata.getDesiredHeight() != 0 ? Math.max(bubbleMetadata.getDesiredHeight(), 0) : 0;
        if (bubbleMetadata.getDesiredHeightResId() != 0) {
            i5 = bubbleMetadata.getDesiredHeightResId();
        } else {
            i5 = 0;
            i10 = max;
        }
        b0 b0Var = new b0();
        b0Var.a = intent;
        b0Var.f20174c = l6;
        b0Var.f20175d = i10;
        b0Var.f20176e = i5;
        b0Var.f20173b = deleteIntent;
        b0Var.f20178g = null;
        b0Var.f20177f = i6;
        return b0Var;
    }

    public static Notification.BubbleMetadata b(b0 b0Var) {
        PendingIntent pendingIntent;
        if (b0Var == null || (pendingIntent = b0Var.a) == null) {
            return null;
        }
        Notification.BubbleMetadata.Builder suppressNotification = new Notification.BubbleMetadata.Builder().setIcon(b0Var.f20174c.i(null)).setIntent(pendingIntent).setDeleteIntent(b0Var.f20173b).setAutoExpandBubble((b0Var.f20177f & 1) != 0).setSuppressNotification((b0Var.f20177f & 2) != 0);
        int i5 = b0Var.f20175d;
        if (i5 != 0) {
            suppressNotification.setDesiredHeight(i5);
        }
        int i6 = b0Var.f20176e;
        if (i6 != 0) {
            suppressNotification.setDesiredHeightResId(i6);
        }
        return suppressNotification.build();
    }
}
