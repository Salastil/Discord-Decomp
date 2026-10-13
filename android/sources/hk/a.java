package hk;

import android.content.Context;
import android.graphics.Rect;
import android.os.Bundle;
import android.text.Editable;
import android.text.TextUtils;
import android.view.View;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityManager;
import android.view.accessibility.AccessibilityNodeInfo;
import android.view.accessibility.AccessibilityNodeProvider;
import android.widget.Button;
import android.widget.EditText;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import org.webrtc.PeerConnection;

/* loaded from: classes3.dex */
public final class a extends AccessibilityNodeProvider {
    public final Rect a = new Rect();

    /* renamed from: b, reason: collision with root package name */
    public final int[] f10034b = new int[2];

    /* renamed from: c, reason: collision with root package name */
    public int f10035c = Integer.MIN_VALUE;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ i f10036d;

    public a(i iVar) {
        this.f10036d = iVar;
    }

    public final AccessibilityNodeInfo a(int i5, int i6, String str, int i10, int i11, int i12) {
        AccessibilityNodeInfo obtain = AccessibilityNodeInfo.obtain();
        obtain.setClassName(Button.class.getName());
        i iVar = this.f10036d;
        obtain.setPackageName(iVar.getContext().getPackageName());
        obtain.setSource(iVar, i5);
        obtain.setParent(iVar);
        obtain.setText(str);
        obtain.setClickable(true);
        obtain.setLongClickable(true);
        obtain.setEnabled(iVar.isEnabled());
        obtain.setAccessibilityFocused(this.f10035c == i5);
        Rect rect = this.a;
        rect.set(i6, i10, i11, i12);
        obtain.setVisibleToUser(true);
        obtain.setBoundsInParent(rect);
        int[] iArr = this.f10034b;
        iVar.getLocationOnScreen(iArr);
        rect.offset(iArr[0], iArr[1]);
        obtain.setBoundsInScreen(rect);
        if (this.f10035c != i5) {
            obtain.addAction(64);
        }
        if (this.f10035c == i5) {
            obtain.addAction(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        }
        if (iVar.isEnabled()) {
            obtain.addAction(16);
        }
        return obtain;
    }

    public final void b(String str, int i5, ArrayList arrayList) {
        EditText editText = this.f10036d.f10051e;
        if (i5 == 1) {
            String d6 = d();
            if (TextUtils.isEmpty(d6) || !d6.toString().toLowerCase().contains(str)) {
                return;
            }
            arrayList.add(createAccessibilityNodeInfo(1));
            return;
        }
        if (i5 != 2) {
            if (i5 != 3) {
                return;
            }
            String c6 = c();
            if (TextUtils.isEmpty(c6) || !c6.toString().toLowerCase().contains(str)) {
                return;
            }
            arrayList.add(createAccessibilityNodeInfo(3));
            return;
        }
        Editable text = editText.getText();
        if (!TextUtils.isEmpty(text) && text.toString().toLowerCase().contains(str)) {
            arrayList.add(createAccessibilityNodeInfo(2));
            return;
        }
        Editable text2 = editText.getText();
        if (TextUtils.isEmpty(text2) || !text2.toString().toLowerCase().contains(str)) {
            return;
        }
        arrayList.add(createAccessibilityNodeInfo(2));
    }

    public final String c() {
        i iVar = this.f10036d;
        int i5 = iVar.K - 1;
        if (iVar.f10060m0) {
            i5 = iVar.f(i5);
        }
        int i6 = iVar.I;
        if (i5 < i6) {
            return null;
        }
        String[] strArr = iVar.H;
        return strArr == null ? iVar.d(i5) : strArr[i5 - i6];
    }

    @Override // android.view.accessibility.AccessibilityNodeProvider
    public final AccessibilityNodeInfo createAccessibilityNodeInfo(int i5) {
        int[] iArr = this.f10034b;
        Rect rect = this.a;
        i iVar = this.f10036d;
        if (i5 != -1) {
            if (i5 == 1) {
                return a(1, iVar.getScrollX(), d(), iVar.f10070v0 - iVar.f10064q0, (iVar.getRight() - iVar.getLeft()) + iVar.getScrollX(), (iVar.getBottom() - iVar.getTop()) + iVar.getScrollY());
            }
            if (i5 != 2) {
                if (i5 != 3) {
                    return super.createAccessibilityNodeInfo(i5);
                }
                return a(3, iVar.getScrollX(), c(), iVar.getScrollY(), (iVar.getRight() - iVar.getLeft()) + iVar.getScrollX(), iVar.f10064q0 + iVar.f10068u0);
            }
            int scrollX = iVar.getScrollX();
            int i6 = iVar.f10068u0 + iVar.f10064q0;
            int right = (iVar.getRight() - iVar.getLeft()) + iVar.getScrollX();
            int i10 = iVar.f10070v0 - iVar.f10064q0;
            AccessibilityNodeInfo createAccessibilityNodeInfo = iVar.f10051e.createAccessibilityNodeInfo();
            createAccessibilityNodeInfo.setSource(iVar, 2);
            createAccessibilityNodeInfo.setAccessibilityFocused(this.f10035c == 2);
            if (this.f10035c != 2) {
                createAccessibilityNodeInfo.addAction(64);
            }
            if (this.f10035c == 2) {
                createAccessibilityNodeInfo.addAction(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            }
            rect.set(scrollX, i6, right, i10);
            createAccessibilityNodeInfo.setVisibleToUser(true);
            createAccessibilityNodeInfo.setBoundsInParent(rect);
            iVar.getLocationOnScreen(iArr);
            rect.offset(iArr[0], iArr[1]);
            createAccessibilityNodeInfo.setBoundsInScreen(rect);
            return createAccessibilityNodeInfo;
        }
        int scrollX2 = iVar.getScrollX();
        int scrollY = iVar.getScrollY();
        int right2 = (iVar.getRight() - iVar.getLeft()) + iVar.getScrollX();
        int bottom = (iVar.getBottom() - iVar.getTop()) + iVar.getScrollY();
        AccessibilityNodeInfo obtain = AccessibilityNodeInfo.obtain();
        obtain.setClassName(i.class.getName());
        obtain.setPackageName(iVar.getContext().getPackageName());
        obtain.setSource(iVar);
        if (iVar.getWrapSelectorWheel() || iVar.getValue() > iVar.getMinValue()) {
            obtain.addChild(iVar, 3);
        }
        obtain.addChild(iVar, 2);
        if (iVar.getWrapSelectorWheel() || iVar.getValue() < iVar.getMaxValue()) {
            obtain.addChild(iVar, 1);
        }
        obtain.setParent((View) iVar.getParentForAccessibility());
        obtain.setEnabled(iVar.isEnabled());
        obtain.setScrollable(true);
        obtain.setAccessibilityFocused(this.f10035c == -1);
        rect.set(scrollX2, scrollY, right2, bottom);
        obtain.setBoundsInParent(rect);
        obtain.setVisibleToUser(true);
        iVar.getLocationOnScreen(iArr);
        rect.offset(iArr[0], iArr[1]);
        obtain.setBoundsInScreen(rect);
        if (this.f10035c != -1) {
            obtain.addAction(64);
        }
        if (this.f10035c == -1) {
            obtain.addAction(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        }
        if (iVar.isEnabled()) {
            if (iVar.getWrapSelectorWheel() || iVar.getValue() < iVar.getMaxValue()) {
                obtain.addAction(AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_FORWARD);
                obtain.addAction(AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_DOWN);
            }
            if (iVar.getWrapSelectorWheel() || iVar.getValue() > iVar.getMinValue()) {
                obtain.addAction(AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_BACKWARD);
                obtain.addAction(AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_UP);
            }
        }
        return obtain;
    }

    public final String d() {
        i iVar = this.f10036d;
        int i5 = iVar.K + 1;
        if (iVar.f10060m0) {
            i5 = iVar.f(i5);
        }
        if (i5 > iVar.J) {
            return null;
        }
        String[] strArr = iVar.H;
        return strArr == null ? iVar.d(i5) : strArr[i5 - iVar.I];
    }

    public final void e(int i5, int i6, String str) {
        i iVar = this.f10036d;
        if (((AccessibilityManager) iVar.getContext().getSystemService("accessibility")).isEnabled()) {
            AccessibilityEvent obtain = AccessibilityEvent.obtain(i6);
            obtain.setClassName(Button.class.getName());
            obtain.setPackageName(iVar.getContext().getPackageName());
            obtain.getText().add(str);
            obtain.setEnabled(iVar.isEnabled());
            obtain.setSource(iVar, i5);
            iVar.requestSendAccessibilityEvent(iVar, obtain);
        }
    }

    public final void f(int i5, int i6) {
        i iVar = this.f10036d;
        if (i5 == 1) {
            if (iVar.getWrapSelectorWheel() || iVar.getValue() < iVar.getMaxValue()) {
                e(i5, i6, d());
                return;
            }
            return;
        }
        if (i5 != 2) {
            if (i5 != 3) {
                return;
            }
            if (iVar.getWrapSelectorWheel() || iVar.getValue() > iVar.getMinValue()) {
                e(i5, i6, c());
                return;
            }
            return;
        }
        Context context = iVar.getContext();
        EditText editText = iVar.f10051e;
        if (((AccessibilityManager) context.getSystemService("accessibility")).isEnabled()) {
            AccessibilityEvent obtain = AccessibilityEvent.obtain(i6);
            editText.onInitializeAccessibilityEvent(obtain);
            editText.onPopulateAccessibilityEvent(obtain);
            obtain.setSource(iVar, 2);
            iVar.requestSendAccessibilityEvent(iVar, obtain);
        }
    }

    @Override // android.view.accessibility.AccessibilityNodeProvider
    public final List findAccessibilityNodeInfosByText(String str, int i5) {
        if (TextUtils.isEmpty(str)) {
            return Collections.EMPTY_LIST;
        }
        String lowerCase = str.toLowerCase();
        ArrayList arrayList = new ArrayList();
        if (i5 == -1) {
            b(lowerCase, 3, arrayList);
            b(lowerCase, 2, arrayList);
            b(lowerCase, 1, arrayList);
            return arrayList;
        }
        if (i5 != 1 && i5 != 2 && i5 != 3) {
            return super.findAccessibilityNodeInfosByText(str, i5);
        }
        b(lowerCase, i5, arrayList);
        return arrayList;
    }

    /* JADX WARN: Code restructure failed: missing block: B:104:0x012d, code lost:
    
        if (r12 != 16908346) goto L104;
     */
    @Override // android.view.accessibility.AccessibilityNodeProvider
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean performAction(int i5, int i6, Bundle bundle) {
        i iVar = this.f10036d;
        if (i5 == -1) {
            if (i6 == 64) {
                if (this.f10035c == i5) {
                    return false;
                }
                this.f10035c = i5;
                return true;
            }
            if (i6 == 128) {
                if (this.f10035c != i5) {
                    return false;
                }
                this.f10035c = Integer.MIN_VALUE;
                return true;
            }
            if (i6 != 4096) {
                if (i6 == 8192 || i6 == 16908344) {
                    if (!iVar.isEnabled() || (!iVar.getWrapSelectorWheel() && iVar.getValue() <= iVar.getMinValue())) {
                        return false;
                    }
                    iVar.a(false);
                    return true;
                }
            }
            if (!iVar.isEnabled() || (!iVar.getWrapSelectorWheel() && iVar.getValue() >= iVar.getMaxValue())) {
                return false;
            }
            iVar.a(true);
            return true;
        }
        if (i5 == 1) {
            if (i6 == 16) {
                if (!iVar.isEnabled()) {
                    return false;
                }
                iVar.a(true);
                f(i5, 1);
                return true;
            }
            if (i6 == 64) {
                if (this.f10035c == i5) {
                    return false;
                }
                this.f10035c = i5;
                f(i5, PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS);
                iVar.invalidate(0, iVar.f10070v0, iVar.getRight(), iVar.getBottom());
                return true;
            }
            if (i6 != 128 || this.f10035c != i5) {
                return false;
            }
            this.f10035c = Integer.MIN_VALUE;
            f(i5, KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT);
            iVar.invalidate(0, iVar.f10070v0, iVar.getRight(), iVar.getBottom());
            return true;
        }
        if (i5 == 2) {
            if (i6 == 1) {
                if (!iVar.isEnabled() || iVar.f10051e.isFocused()) {
                    return false;
                }
                return iVar.f10051e.requestFocus();
            }
            if (i6 == 2) {
                if (!iVar.isEnabled() || !iVar.f10051e.isFocused()) {
                    return false;
                }
                iVar.f10051e.clearFocus();
                return true;
            }
            if (i6 == 16) {
                if (!iVar.isEnabled()) {
                    return false;
                }
                iVar.performClick();
                return true;
            }
            if (i6 == 32) {
                if (!iVar.isEnabled()) {
                    return false;
                }
                iVar.performLongClick();
                return true;
            }
            if (i6 == 64) {
                if (this.f10035c == i5) {
                    return false;
                }
                this.f10035c = i5;
                f(i5, PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS);
                iVar.f10051e.invalidate();
                return true;
            }
            if (i6 != 128) {
                return iVar.f10051e.performAccessibilityAction(i6, bundle);
            }
            if (this.f10035c != i5) {
                return false;
            }
            this.f10035c = Integer.MIN_VALUE;
            f(i5, KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT);
            iVar.f10051e.invalidate();
            return true;
        }
        if (i5 == 3) {
            if (i6 == 16) {
                if (!iVar.isEnabled()) {
                    return false;
                }
                iVar.a(i5 == 1);
                f(i5, 1);
                return true;
            }
            if (i6 == 64) {
                if (this.f10035c == i5) {
                    return false;
                }
                this.f10035c = i5;
                f(i5, PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS);
                iVar.invalidate(0, 0, iVar.getRight(), iVar.f10068u0);
                return true;
            }
            if (i6 != 128 || this.f10035c != i5) {
                return false;
            }
            this.f10035c = Integer.MIN_VALUE;
            f(i5, KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT);
            iVar.invalidate(0, 0, iVar.getRight(), iVar.f10068u0);
            return true;
        }
        return super.performAction(i5, i6, bundle);
    }
}
