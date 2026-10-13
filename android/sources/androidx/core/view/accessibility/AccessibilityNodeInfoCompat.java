package androidx.core.view.accessibility;

import android.R;
import android.graphics.Rect;
import android.os.Build;
import android.os.Bundle;
import android.text.SpannableString;
import android.text.TextUtils;
import android.view.accessibility.AccessibilityNodeInfo;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import java.util.List;
import org.webrtc.PeerConnection;

/* loaded from: classes.dex */
public final class AccessibilityNodeInfoCompat {

    /* renamed from: c, reason: collision with root package name */
    public static int f1551c;
    public final AccessibilityNodeInfo a;

    /* renamed from: b, reason: collision with root package name */
    public int f1552b = -1;

    public AccessibilityNodeInfoCompat(AccessibilityNodeInfo accessibilityNodeInfo) {
        this.a = accessibilityNodeInfo;
    }

    public static String e(int i5) {
        if (i5 == 1) {
            return "ACTION_FOCUS";
        }
        if (i5 == 2) {
            return "ACTION_CLEAR_FOCUS";
        }
        switch (i5) {
            case 4:
                return "ACTION_SELECT";
            case 8:
                return "ACTION_CLEAR_SELECTION";
            case 16:
                return "ACTION_CLICK";
            case 32:
                return "ACTION_LONG_CLICK";
            case 64:
                return "ACTION_ACCESSIBILITY_FOCUS";
            case IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT /* 128 */:
                return "ACTION_CLEAR_ACCESSIBILITY_FOCUS";
            case IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER /* 256 */:
                return "ACTION_NEXT_AT_MOVEMENT_GRANULARITY";
            case IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING /* 512 */:
                return "ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY";
            case IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET /* 1024 */:
                return "ACTION_NEXT_HTML_ELEMENT";
            case RecyclerView.ItemAnimator.FLAG_MOVED /* 2048 */:
                return "ACTION_PREVIOUS_HTML_ELEMENT";
            case RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT /* 4096 */:
                return "ACTION_SCROLL_FORWARD";
            case 8192:
                return "ACTION_SCROLL_BACKWARD";
            case 16384:
                return "ACTION_COPY";
            case PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS /* 32768 */:
                return "ACTION_PASTE";
            case KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT /* 65536 */:
                return "ACTION_CUT";
            case KeyCommandDescriptor.ModifierFlags.SHIFT /* 131072 */:
                return "ACTION_SET_SELECTION";
            case KeyCommandDescriptor.ModifierFlags.CONTROL /* 262144 */:
                return "ACTION_EXPAND";
            case KeyCommandDescriptor.ModifierFlags.ALTERNATE /* 524288 */:
                return "ACTION_COLLAPSE";
            case KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD /* 2097152 */:
                return "ACTION_SET_TEXT";
            case R.id.accessibilityActionMoveWindow:
                return "ACTION_MOVE_WINDOW";
            case R.id.accessibilityActionScrollInDirection:
                return "ACTION_SCROLL_IN_DIRECTION";
            default:
                switch (i5) {
                    case R.id.accessibilityActionShowOnScreen:
                        return "ACTION_SHOW_ON_SCREEN";
                    case R.id.accessibilityActionScrollToPosition:
                        return "ACTION_SCROLL_TO_POSITION";
                    case R.id.accessibilityActionScrollUp:
                        return "ACTION_SCROLL_UP";
                    case R.id.accessibilityActionScrollLeft:
                        return "ACTION_SCROLL_LEFT";
                    case R.id.accessibilityActionScrollDown:
                        return "ACTION_SCROLL_DOWN";
                    case R.id.accessibilityActionScrollRight:
                        return "ACTION_SCROLL_RIGHT";
                    case R.id.accessibilityActionContextClick:
                        return "ACTION_CONTEXT_CLICK";
                    case R.id.accessibilityActionSetProgress:
                        return "ACTION_SET_PROGRESS";
                    default:
                        switch (i5) {
                            case R.id.accessibilityActionShowTooltip:
                                return "ACTION_SHOW_TOOLTIP";
                            case R.id.accessibilityActionHideTooltip:
                                return "ACTION_HIDE_TOOLTIP";
                            case R.id.accessibilityActionPageUp:
                                return "ACTION_PAGE_UP";
                            case R.id.accessibilityActionPageDown:
                                return "ACTION_PAGE_DOWN";
                            case R.id.accessibilityActionPageLeft:
                                return "ACTION_PAGE_LEFT";
                            case R.id.accessibilityActionPageRight:
                                return "ACTION_PAGE_RIGHT";
                            case R.id.accessibilityActionPressAndHold:
                                return "ACTION_PRESS_AND_HOLD";
                            default:
                                switch (i5) {
                                    case R.id.accessibilityActionImeEnter:
                                        return "ACTION_IME_ENTER";
                                    case R.id.accessibilityActionDragStart:
                                        return "ACTION_DRAG_START";
                                    case R.id.accessibilityActionDragDrop:
                                        return "ACTION_DRAG_DROP";
                                    case R.id.accessibilityActionDragCancel:
                                        return "ACTION_DRAG_CANCEL";
                                    default:
                                        return "ACTION_UNKNOWN";
                                }
                        }
                }
        }
    }

    public final void A(CharSequence charSequence) {
        this.a.setText(charSequence);
    }

    public final void B(String str) {
        int i5 = Build.VERSION.SDK_INT;
        AccessibilityNodeInfo accessibilityNodeInfo = this.a;
        if (i5 >= 28) {
            accessibilityNodeInfo.setTooltipText(str);
        } else {
            accessibilityNodeInfo.getExtras().putCharSequence("androidx.view.accessibility.AccessibilityNodeInfoCompat.TOOLTIP_TEXT_KEY", str);
        }
    }

    public final void a(int i5) {
        this.a.addAction(i5);
    }

    public final void b(a aVar) {
        this.a.addAction((AccessibilityNodeInfo.AccessibilityAction) aVar.a);
    }

    public final ArrayList c(String str) {
        AccessibilityNodeInfo accessibilityNodeInfo = this.a;
        ArrayList<Integer> integerArrayList = accessibilityNodeInfo.getExtras().getIntegerArrayList(str);
        if (integerArrayList != null) {
            return integerArrayList;
        }
        ArrayList<Integer> arrayList = new ArrayList<>();
        accessibilityNodeInfo.getExtras().putIntegerArrayList(str, arrayList);
        return arrayList;
    }

    public final ArrayList d() {
        List<AccessibilityNodeInfo.AccessibilityAction> actionList = this.a.getActionList();
        ArrayList arrayList = new ArrayList();
        int size = actionList.size();
        for (int i5 = 0; i5 < size; i5++) {
            arrayList.add(new a(actionList.get(i5), 0, null, null, null));
        }
        return arrayList;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || !(obj instanceof AccessibilityNodeInfoCompat)) {
            return false;
        }
        AccessibilityNodeInfoCompat accessibilityNodeInfoCompat = (AccessibilityNodeInfoCompat) obj;
        AccessibilityNodeInfo accessibilityNodeInfo = accessibilityNodeInfoCompat.a;
        AccessibilityNodeInfo accessibilityNodeInfo2 = this.a;
        if (accessibilityNodeInfo2 == null) {
            if (accessibilityNodeInfo != null) {
                return false;
            }
        } else if (!accessibilityNodeInfo2.equals(accessibilityNodeInfo)) {
            return false;
        }
        return this.f1552b == accessibilityNodeInfoCompat.f1552b;
    }

    public final boolean f(int i5) {
        Bundle extras = this.a.getExtras();
        return extras != null && (extras.getInt("androidx.view.accessibility.AccessibilityNodeInfoCompat.BOOLEAN_PROPERTY_KEY", 0) & i5) == i5;
    }

    public final void g(Rect rect) {
        this.a.getBoundsInParent(rect);
    }

    public final CharSequence h() {
        int i5 = Build.VERSION.SDK_INT;
        AccessibilityNodeInfo accessibilityNodeInfo = this.a;
        return i5 >= 26 ? accessibilityNodeInfo.getHintText() : accessibilityNodeInfo.getExtras().getCharSequence("androidx.view.accessibility.AccessibilityNodeInfoCompat.HINT_TEXT_KEY");
    }

    public final int hashCode() {
        AccessibilityNodeInfo accessibilityNodeInfo = this.a;
        if (accessibilityNodeInfo == null) {
            return 0;
        }
        return accessibilityNodeInfo.hashCode();
    }

    public final CharSequence i() {
        boolean isEmpty = c("androidx.view.accessibility.AccessibilityNodeInfoCompat.SPANS_START_KEY").isEmpty();
        AccessibilityNodeInfo accessibilityNodeInfo = this.a;
        if (isEmpty) {
            return accessibilityNodeInfo.getText();
        }
        ArrayList c6 = c("androidx.view.accessibility.AccessibilityNodeInfoCompat.SPANS_START_KEY");
        ArrayList c8 = c("androidx.view.accessibility.AccessibilityNodeInfoCompat.SPANS_END_KEY");
        ArrayList c10 = c("androidx.view.accessibility.AccessibilityNodeInfoCompat.SPANS_FLAGS_KEY");
        ArrayList c11 = c("androidx.view.accessibility.AccessibilityNodeInfoCompat.SPANS_ID_KEY");
        SpannableString spannableString = new SpannableString(TextUtils.substring(accessibilityNodeInfo.getText(), 0, accessibilityNodeInfo.getText().length()));
        for (int i5 = 0; i5 < c6.size(); i5++) {
            spannableString.setSpan(new l1.a(((Integer) c11.get(i5)).intValue(), this, accessibilityNodeInfo.getExtras().getInt("androidx.view.accessibility.AccessibilityNodeInfoCompat.SPANS_ACTION_ID_KEY")), ((Integer) c6.get(i5)).intValue(), ((Integer) c8.get(i5)).intValue(), ((Integer) c10.get(i5)).intValue());
        }
        return spannableString;
    }

    public final boolean j() {
        return Build.VERSION.SDK_INT >= 28 ? this.a.isScreenReaderFocusable() : f(1);
    }

    public final boolean k() {
        return Build.VERSION.SDK_INT >= 26 ? this.a.isShowingHintText() : f(4);
    }

    public final void l(int i5, boolean z5) {
        Bundle extras = this.a.getExtras();
        if (extras != null) {
            int i6 = extras.getInt("androidx.view.accessibility.AccessibilityNodeInfoCompat.BOOLEAN_PROPERTY_KEY", 0) & (~i5);
            if (!z5) {
                i5 = 0;
            }
            extras.putInt("androidx.view.accessibility.AccessibilityNodeInfoCompat.BOOLEAN_PROPERTY_KEY", i5 | i6);
        }
    }

    public final void m(Rect rect) {
        this.a.setBoundsInParent(rect);
    }

    public final void n(boolean z5) {
        this.a.setCheckable(z5);
    }

    public final void o(CharSequence charSequence) {
        this.a.setClassName(charSequence);
    }

    public final void p(boolean z5) {
        this.a.setClickable(z5);
    }

    public final void q(l1.c cVar) {
        this.a.setCollectionInfo(cVar == null ? null : (AccessibilityNodeInfo.CollectionInfo) cVar.a);
    }

    public final void r(l1.d dVar) {
        this.a.setCollectionItemInfo((AccessibilityNodeInfo.CollectionItemInfo) dVar.a);
    }

    public final void s(CharSequence charSequence) {
        this.a.setContentDescription(charSequence);
    }

    public final void t(boolean z5) {
        if (Build.VERSION.SDK_INT >= 28) {
            this.a.setHeading(z5);
        } else {
            l(2, z5);
        }
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(super.toString());
        Rect rect = new Rect();
        g(rect);
        sb2.append("; boundsInParent: " + rect);
        AccessibilityNodeInfo accessibilityNodeInfo = this.a;
        accessibilityNodeInfo.getBoundsInScreen(rect);
        sb2.append("; boundsInScreen: " + rect);
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 34) {
            a2.a.g(accessibilityNodeInfo, rect);
        } else {
            Rect rect2 = (Rect) accessibilityNodeInfo.getExtras().getParcelable("androidx.view.accessibility.AccessibilityNodeInfoCompat.BOUNDS_IN_WINDOW_KEY");
            if (rect2 != null) {
                rect.set(rect2.left, rect2.top, rect2.right, rect2.bottom);
            }
        }
        sb2.append("; boundsInWindow: " + rect);
        sb2.append("; packageName: ");
        sb2.append(accessibilityNodeInfo.getPackageName());
        sb2.append("; className: ");
        sb2.append(accessibilityNodeInfo.getClassName());
        sb2.append("; text: ");
        sb2.append(i());
        sb2.append("; error: ");
        sb2.append(accessibilityNodeInfo.getError());
        sb2.append("; maxTextLength: ");
        sb2.append(accessibilityNodeInfo.getMaxTextLength());
        sb2.append("; stateDescription: ");
        sb2.append(i5 >= 30 ? z0.d.g(accessibilityNodeInfo) : accessibilityNodeInfo.getExtras().getCharSequence("androidx.view.accessibility.AccessibilityNodeInfoCompat.STATE_DESCRIPTION_KEY"));
        sb2.append("; contentDescription: ");
        sb2.append(accessibilityNodeInfo.getContentDescription());
        sb2.append("; supplementalDescription: ");
        sb2.append(i5 >= 36 ? l1.b.c(accessibilityNodeInfo) : accessibilityNodeInfo.getExtras().getCharSequence("androidx.view.accessibility.AccessibilityNodeInfoCompat.SUPPLEMENTAL_DESCRIPTION_KEY"));
        sb2.append("; tooltipText: ");
        sb2.append(i5 >= 28 ? accessibilityNodeInfo.getTooltipText() : accessibilityNodeInfo.getExtras().getCharSequence("androidx.view.accessibility.AccessibilityNodeInfoCompat.TOOLTIP_TEXT_KEY"));
        sb2.append("; viewIdResName: ");
        sb2.append(accessibilityNodeInfo.getViewIdResourceName());
        sb2.append("; uniqueId: ");
        sb2.append(i5 >= 33 ? e.e.e(accessibilityNodeInfo) : accessibilityNodeInfo.getExtras().getString("androidx.view.accessibility.AccessibilityNodeInfoCompat.UNIQUE_ID_KEY"));
        sb2.append("; checkable: ");
        sb2.append(accessibilityNodeInfo.isCheckable());
        sb2.append("; checked: ");
        int a = i5 >= 36 ? l1.b.a(accessibilityNodeInfo) : accessibilityNodeInfo.getExtras().getInt("androidx.view.accessibility.AccessibilityNodeInfoCompat.CHECKED_KEY", accessibilityNodeInfo.isChecked() ? 1 : 0);
        String str = "PARTIAL";
        sb2.append(a == 1 ? "TRUE" : a == 2 ? "PARTIAL" : "FALSE");
        sb2.append("; fieldRequired: ");
        sb2.append(i5 >= 36 ? l1.b.d(accessibilityNodeInfo) : accessibilityNodeInfo.getExtras().getBoolean("androidx.view.accessibility.AccessibilityNodeInfoCompat.IS_REQUIRED_KEY"));
        sb2.append("; focusable: ");
        sb2.append(accessibilityNodeInfo.isFocusable());
        sb2.append("; focused: ");
        sb2.append(accessibilityNodeInfo.isFocused());
        sb2.append("; selected: ");
        sb2.append(accessibilityNodeInfo.isSelected());
        sb2.append("; clickable: ");
        sb2.append(accessibilityNodeInfo.isClickable());
        sb2.append("; longClickable: ");
        sb2.append(accessibilityNodeInfo.isLongClickable());
        sb2.append("; contextClickable: ");
        sb2.append(accessibilityNodeInfo.isContextClickable());
        sb2.append("; expandedState: ");
        int b10 = i5 >= 36 ? l1.b.b(accessibilityNodeInfo) : accessibilityNodeInfo.getExtras().getInt("androidx.view.accessibility.AccessibilityNodeInfoCompat.EXPANDED_STATE_KEY", 0);
        if (b10 == 0) {
            str = "UNDEFINED";
        } else if (b10 == 1) {
            str = "COLLAPSED";
        } else if (b10 != 2) {
            str = b10 != 3 ? "UNKNOWN" : "FULL";
        }
        sb2.append(str);
        sb2.append("; enabled: ");
        sb2.append(accessibilityNodeInfo.isEnabled());
        sb2.append("; password: ");
        sb2.append(accessibilityNodeInfo.isPassword());
        sb2.append("; scrollable: " + accessibilityNodeInfo.isScrollable());
        sb2.append("; containerTitle: ");
        sb2.append(i5 >= 34 ? a2.a.h(accessibilityNodeInfo) : accessibilityNodeInfo.getExtras().getCharSequence("androidx.view.accessibility.AccessibilityNodeInfoCompat.CONTAINER_TITLE_KEY"));
        sb2.append("; granularScrollingSupported: ");
        sb2.append(f(67108864));
        sb2.append("; importantForAccessibility: ");
        sb2.append(accessibilityNodeInfo.isImportantForAccessibility());
        sb2.append("; visible: ");
        sb2.append(accessibilityNodeInfo.isVisibleToUser());
        sb2.append("; isTextSelectable: ");
        sb2.append(i5 >= 33 ? e.e.f(accessibilityNodeInfo) : f(8388608));
        sb2.append("; accessibilityDataSensitive: ");
        sb2.append(i5 >= 34 ? a2.a.k(accessibilityNodeInfo) : f(64));
        sb2.append("; [");
        ArrayList d6 = d();
        for (int i6 = 0; i6 < d6.size(); i6++) {
            a aVar = (a) d6.get(i6);
            int a10 = aVar.a();
            Object obj = aVar.a;
            String e9 = e(a10);
            if (e9.equals("ACTION_UNKNOWN") && ((AccessibilityNodeInfo.AccessibilityAction) obj).getLabel() != null) {
                e9 = ((AccessibilityNodeInfo.AccessibilityAction) obj).getLabel().toString();
            }
            sb2.append(e9);
            if (i6 != d6.size() - 1) {
                sb2.append(", ");
            }
        }
        sb2.append("]");
        return sb2.toString();
    }

    public final void u(String str) {
        int i5 = Build.VERSION.SDK_INT;
        AccessibilityNodeInfo accessibilityNodeInfo = this.a;
        if (i5 >= 26) {
            accessibilityNodeInfo.setHintText(str);
        } else {
            accessibilityNodeInfo.getExtras().putCharSequence("androidx.view.accessibility.AccessibilityNodeInfoCompat.HINT_TEXT_KEY", str);
        }
    }

    public final void v(CharSequence charSequence) {
        int i5 = Build.VERSION.SDK_INT;
        AccessibilityNodeInfo accessibilityNodeInfo = this.a;
        if (i5 >= 28) {
            accessibilityNodeInfo.setPaneTitle(charSequence);
        } else {
            accessibilityNodeInfo.getExtras().putCharSequence("androidx.view.accessibility.AccessibilityNodeInfoCompat.PANE_TITLE_KEY", charSequence);
        }
    }

    public final void w(CharSequence charSequence) {
        this.a.getExtras().putCharSequence("AccessibilityNodeInfo.roleDescription", charSequence);
    }

    public final void x(boolean z5) {
        if (Build.VERSION.SDK_INT >= 28) {
            this.a.setScreenReaderFocusable(z5);
        } else {
            l(1, z5);
        }
    }

    public final void y(boolean z5) {
        this.a.setScrollable(z5);
    }

    public final void z(boolean z5) {
        if (Build.VERSION.SDK_INT >= 26) {
            this.a.setShowingHintText(z5);
        } else {
            l(4, z5);
        }
    }
}
