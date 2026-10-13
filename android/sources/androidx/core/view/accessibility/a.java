package androidx.core.view.accessibility;

import android.R;
import android.os.Build;
import android.view.accessibility.AccessibilityNodeInfo;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import org.webrtc.PeerConnection;

/* loaded from: classes.dex */
public final class a {

    /* renamed from: e, reason: collision with root package name */
    public static final a f1553e = new a(1, (CharSequence) null);

    /* renamed from: f, reason: collision with root package name */
    public static final a f1554f = new a(2, (CharSequence) null);

    /* renamed from: g, reason: collision with root package name */
    public static final a f1555g;

    /* renamed from: h, reason: collision with root package name */
    public static final a f1556h;

    /* renamed from: i, reason: collision with root package name */
    public static final a f1557i;
    public static final a j;
    public static final a k;

    /* renamed from: l, reason: collision with root package name */
    public static final a f1558l;

    /* renamed from: m, reason: collision with root package name */
    public static final a f1559m;

    /* renamed from: n, reason: collision with root package name */
    public static final a f1560n;

    /* renamed from: o, reason: collision with root package name */
    public static final a f1561o;

    /* renamed from: p, reason: collision with root package name */
    public static final a f1562p;

    /* renamed from: q, reason: collision with root package name */
    public static final a f1563q;
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final int f1564b;

    /* renamed from: c, reason: collision with root package name */
    public final Class f1565c;

    /* renamed from: d, reason: collision with root package name */
    public final AccessibilityViewCommand f1566d;

    static {
        new a(4, (CharSequence) null);
        new a(8, (CharSequence) null);
        f1555g = new a(16, (CharSequence) null);
        f1556h = new a(32, (CharSequence) null);
        new a(64, (CharSequence) null);
        new a(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, (CharSequence) null);
        new a(IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER, b.class);
        new a(IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING, b.class);
        new a(IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET, c.class);
        new a(RecyclerView.ItemAnimator.FLAG_MOVED, c.class);
        f1557i = new a(RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT, (CharSequence) null);
        j = new a(8192, (CharSequence) null);
        new a(16384, (CharSequence) null);
        new a(PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS, (CharSequence) null);
        new a(KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT, (CharSequence) null);
        new a(KeyCommandDescriptor.ModifierFlags.SHIFT, g.class);
        k = new a(KeyCommandDescriptor.ModifierFlags.CONTROL, (CharSequence) null);
        f1558l = new a(KeyCommandDescriptor.ModifierFlags.ALTERNATE, (CharSequence) null);
        f1559m = new a(KeyCommandDescriptor.ModifierFlags.COMMAND, (CharSequence) null);
        new a(KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD, h.class);
        int i5 = Build.VERSION.SDK_INT;
        new a(AccessibilityNodeInfo.AccessibilityAction.ACTION_SHOW_ON_SCREEN, R.id.accessibilityActionShowOnScreen, null, null, null);
        f1560n = new a(AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_TO_POSITION, R.id.accessibilityActionScrollToPosition, null, null, e.class);
        f1561o = new a(AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_UP, R.id.accessibilityActionScrollUp, null, null, null);
        new a(AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_LEFT, R.id.accessibilityActionScrollLeft, null, null, null);
        f1562p = new a(AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_DOWN, R.id.accessibilityActionScrollDown, null, null, null);
        new a(AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_RIGHT, R.id.accessibilityActionScrollRight, null, null, null);
        new a(i5 >= 29 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_PAGE_UP : null, R.id.accessibilityActionPageUp, null, null, null);
        new a(i5 >= 29 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_PAGE_DOWN : null, R.id.accessibilityActionPageDown, null, null, null);
        new a(i5 >= 29 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_PAGE_LEFT : null, R.id.accessibilityActionPageLeft, null, null, null);
        new a(i5 >= 29 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_PAGE_RIGHT : null, R.id.accessibilityActionPageRight, null, null, null);
        new a(AccessibilityNodeInfo.AccessibilityAction.ACTION_CONTEXT_CLICK, R.id.accessibilityActionContextClick, null, null, null);
        new a(AccessibilityNodeInfo.AccessibilityAction.ACTION_SET_PROGRESS, R.id.accessibilityActionSetProgress, null, null, f.class);
        new a(i5 >= 26 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_MOVE_WINDOW : null, R.id.accessibilityActionMoveWindow, null, null, d.class);
        new a(i5 >= 28 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_SHOW_TOOLTIP : null, R.id.accessibilityActionShowTooltip, null, null, null);
        new a(i5 >= 28 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_HIDE_TOOLTIP : null, R.id.accessibilityActionHideTooltip, null, null, null);
        new a(i5 >= 30 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_PRESS_AND_HOLD : null, R.id.accessibilityActionPressAndHold, null, null, null);
        new a(i5 >= 30 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_IME_ENTER : null, R.id.accessibilityActionImeEnter, null, null, null);
        new a(i5 >= 32 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_DRAG_START : null, R.id.accessibilityActionDragStart, null, null, null);
        new a(i5 >= 32 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_DRAG_DROP : null, R.id.accessibilityActionDragDrop, null, null, null);
        new a(i5 >= 32 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_DRAG_CANCEL : null, R.id.accessibilityActionDragCancel, null, null, null);
        new a(i5 >= 33 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_SHOW_TEXT_SUGGESTIONS : null, R.id.accessibilityActionShowTextSuggestions, null, null, null);
        f1563q = new a(i5 >= 34 ? a2.a.e() : null, R.id.accessibilityActionScrollInDirection, null, null, null);
    }

    public a(int i5, CharSequence charSequence) {
        this(null, i5, charSequence, null, null);
    }

    public final int a() {
        return ((AccessibilityNodeInfo.AccessibilityAction) this.a).getId();
    }

    public final boolean equals(Object obj) {
        if (obj == null || !(obj instanceof a)) {
            return false;
        }
        Object obj2 = ((a) obj).a;
        Object obj3 = this.a;
        return obj3 == null ? obj2 == null : obj3.equals(obj2);
    }

    public final int hashCode() {
        Object obj = this.a;
        if (obj != null) {
            return obj.hashCode();
        }
        return 0;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("AccessibilityActionCompat: ");
        String e9 = AccessibilityNodeInfoCompat.e(this.f1564b);
        if (e9.equals("ACTION_UNKNOWN")) {
            Object obj = this.a;
            if (((AccessibilityNodeInfo.AccessibilityAction) obj).getLabel() != null) {
                e9 = ((AccessibilityNodeInfo.AccessibilityAction) obj).getLabel().toString();
            }
        }
        sb2.append(e9);
        return sb2.toString();
    }

    public a(int i5, Class cls) {
        this(null, i5, null, null, cls);
    }

    public a(Object obj, int i5, CharSequence charSequence, AccessibilityViewCommand accessibilityViewCommand, Class cls) {
        this.f1564b = i5;
        this.f1566d = accessibilityViewCommand;
        if (obj == null) {
            this.a = new AccessibilityNodeInfo.AccessibilityAction(i5, charSequence);
        } else {
            this.a = obj;
        }
        this.f1565c = cls;
    }
}
