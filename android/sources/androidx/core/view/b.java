package androidx.core.view;

import android.os.Bundle;
import android.text.Spanned;
import android.text.style.ClickableSpan;
import android.util.Log;
import android.util.SparseArray;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeProvider;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.core.view.accessibility.AccessibilityNodeProviderCompat;
import androidx.core.view.accessibility.AccessibilityViewCommand;
import com.discord.R;
import java.lang.ref.WeakReference;
import java.util.Collections;
import java.util.List;

/* loaded from: classes.dex */
public class b {
    private static final View.AccessibilityDelegate DEFAULT_DELEGATE = new View.AccessibilityDelegate();
    private final View.AccessibilityDelegate mBridge;
    private final View.AccessibilityDelegate mOriginalDelegate;

    public b() {
        this(DEFAULT_DELEGATE);
    }

    public static List<androidx.core.view.accessibility.a> getActionList(View view) {
        List<androidx.core.view.accessibility.a> list = (List) view.getTag(R.id.tag_accessibility_actions);
        return list == null ? Collections.EMPTY_LIST : list;
    }

    public boolean dispatchPopulateAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
        return this.mOriginalDelegate.dispatchPopulateAccessibilityEvent(view, accessibilityEvent);
    }

    public AccessibilityNodeProviderCompat getAccessibilityNodeProvider(View view) {
        AccessibilityNodeProvider accessibilityNodeProvider = this.mOriginalDelegate.getAccessibilityNodeProvider(view);
        if (accessibilityNodeProvider != null) {
            return new AccessibilityNodeProviderCompat(accessibilityNodeProvider);
        }
        return null;
    }

    public View.AccessibilityDelegate getBridge() {
        return this.mBridge;
    }

    public void onInitializeAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
        this.mOriginalDelegate.onInitializeAccessibilityEvent(view, accessibilityEvent);
    }

    public void onInitializeAccessibilityNodeInfo(View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        this.mOriginalDelegate.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat.a);
    }

    public void onPopulateAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
        this.mOriginalDelegate.onPopulateAccessibilityEvent(view, accessibilityEvent);
    }

    public boolean onRequestSendAccessibilityEvent(ViewGroup viewGroup, View view, AccessibilityEvent accessibilityEvent) {
        return this.mOriginalDelegate.onRequestSendAccessibilityEvent(viewGroup, view, accessibilityEvent);
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x004f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean performAccessibilityAction(View view, int i5, Bundle bundle) {
        boolean z5;
        WeakReference weakReference;
        ClickableSpan clickableSpan;
        AccessibilityViewCommand.CommandArguments commandArguments;
        List<androidx.core.view.accessibility.a> actionList = getActionList(view);
        boolean z6 = false;
        int i6 = 0;
        while (true) {
            if (i6 >= actionList.size()) {
                break;
            }
            androidx.core.view.accessibility.a aVar = actionList.get(i6);
            if (aVar.a() == i5) {
                Class cls = aVar.f1565c;
                AccessibilityViewCommand accessibilityViewCommand = aVar.f1566d;
                if (accessibilityViewCommand != null) {
                    if (cls != null) {
                        try {
                            commandArguments = (AccessibilityViewCommand.CommandArguments) cls.getDeclaredConstructor(null).newInstance(null);
                            try {
                                commandArguments.getClass();
                            } catch (Exception e9) {
                                e = e9;
                                Log.e("A11yActionCompat", "Failed to execute command with argument class ViewCommandArgument: ".concat(cls.getName()), e);
                                z5 = accessibilityViewCommand.c(view, commandArguments);
                                if (!z5) {
                                }
                                return !z5 ? z5 : z5;
                            }
                        } catch (Exception e10) {
                            e = e10;
                            commandArguments = null;
                        }
                    } else {
                        commandArguments = null;
                    }
                    z5 = accessibilityViewCommand.c(view, commandArguments);
                }
            } else {
                i6++;
            }
        }
        z5 = false;
        if (!z5) {
            z5 = this.mOriginalDelegate.performAccessibilityAction(view, i5, bundle);
        }
        if (!z5 || i5 != R.id.accessibility_action_clickable_span || bundle == null) {
            return z5;
        }
        int i10 = bundle.getInt("ACCESSIBILITY_CLICKABLE_SPAN_ID", -1);
        SparseArray sparseArray = (SparseArray) view.getTag(R.id.tag_accessibility_clickable_spans);
        if (sparseArray != null && (weakReference = (WeakReference) sparseArray.get(i10)) != null && (clickableSpan = (ClickableSpan) weakReference.get()) != null) {
            CharSequence text = view.createAccessibilityNodeInfo().getText();
            ClickableSpan[] clickableSpanArr = text instanceof Spanned ? (ClickableSpan[]) ((Spanned) text).getSpans(0, text.length(), ClickableSpan.class) : null;
            int i11 = 0;
            while (true) {
                if (clickableSpanArr == null || i11 >= clickableSpanArr.length) {
                    break;
                }
                if (clickableSpan.equals(clickableSpanArr[i11])) {
                    clickableSpan.onClick(view);
                    z6 = true;
                    break;
                }
                i11++;
            }
        }
        return z6;
    }

    public void sendAccessibilityEvent(View view, int i5) {
        this.mOriginalDelegate.sendAccessibilityEvent(view, i5);
    }

    public void sendAccessibilityEventUnchecked(View view, AccessibilityEvent accessibilityEvent) {
        this.mOriginalDelegate.sendAccessibilityEventUnchecked(view, accessibilityEvent);
    }

    public b(View.AccessibilityDelegate accessibilityDelegate) {
        this.mOriginalDelegate = accessibilityDelegate;
        this.mBridge = new a(this);
    }
}
