package androidx.customview.widget;

import android.graphics.Rect;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewParent;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityManager;
import android.view.accessibility.AccessibilityNodeInfo;
import androidx.annotation.NonNull;
import androidx.collection.SparseArrayCompat;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.core.view.accessibility.AccessibilityNodeProviderCompat;
import androidx.core.view.s0;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.WeakHashMap;
import m3.n;
import org.webrtc.PeerConnection;
import s.l;
import wi.d;

/* loaded from: classes.dex */
public abstract class a extends androidx.core.view.b {
    private static final String DEFAULT_CLASS_NAME = "android.view.View";
    public static final int HOST_ID = -1;
    public static final int INVALID_ID = Integer.MIN_VALUE;
    private static final Rect INVALID_PARENT_BOUNDS = new Rect(Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MIN_VALUE, Integer.MIN_VALUE);
    private static final FocusStrategy$BoundsAdapter NODE_ADAPTER = new r8.c(1);
    private static final FocusStrategy$CollectionAdapter SPARSE_VALUES_ADAPTER = new d(1);
    private final View mHost;
    private final AccessibilityManager mManager;
    private ExploreByTouchHelper$MyNodeProvider mNodeProvider;
    private final Rect mTempScreenRect = new Rect();
    private final Rect mTempParentRect = new Rect();
    private final Rect mTempVisibleRect = new Rect();
    private final int[] mTempGlobalRect = new int[2];
    int mAccessibilityFocusedVirtualViewId = Integer.MIN_VALUE;
    int mKeyboardFocusedVirtualViewId = Integer.MIN_VALUE;
    private int mHoveredVirtualViewId = Integer.MIN_VALUE;

    public a(View view) {
        if (view == null) {
            throw new IllegalArgumentException("View may not be null");
        }
        this.mHost = view;
        this.mManager = (AccessibilityManager) view.getContext().getSystemService("accessibility");
        view.setFocusable(true);
        WeakHashMap weakHashMap = s0.a;
        if (view.getImportantForAccessibility() == 0) {
            view.setImportantForAccessibility(1);
        }
    }

    public final AccessibilityEvent a(int i5, int i6) {
        if (i5 == -1) {
            AccessibilityEvent obtain = AccessibilityEvent.obtain(i6);
            this.mHost.onInitializeAccessibilityEvent(obtain);
            return obtain;
        }
        AccessibilityEvent obtain2 = AccessibilityEvent.obtain(i6);
        AccessibilityNodeInfoCompat obtainAccessibilityNodeInfo = obtainAccessibilityNodeInfo(i5);
        obtain2.getText().add(obtainAccessibilityNodeInfo.i());
        AccessibilityNodeInfo accessibilityNodeInfo = obtainAccessibilityNodeInfo.a;
        obtain2.setContentDescription(accessibilityNodeInfo.getContentDescription());
        obtain2.setScrollable(accessibilityNodeInfo.isScrollable());
        obtain2.setPassword(accessibilityNodeInfo.isPassword());
        obtain2.setEnabled(accessibilityNodeInfo.isEnabled());
        obtain2.setChecked(accessibilityNodeInfo.isChecked());
        onPopulateEventForVirtualView(i5, obtain2);
        if (obtain2.getText().isEmpty() && obtain2.getContentDescription() == null) {
            throw new RuntimeException("Callbacks must add text or a content description in populateEventForVirtualViewId()");
        }
        obtain2.setClassName(accessibilityNodeInfo.getClassName());
        obtain2.setSource(this.mHost, i5);
        obtain2.setPackageName(this.mHost.getContext().getPackageName());
        return obtain2;
    }

    public final AccessibilityNodeInfoCompat b(int i5) {
        AccessibilityNodeInfo obtain = AccessibilityNodeInfo.obtain();
        AccessibilityNodeInfoCompat accessibilityNodeInfoCompat = new AccessibilityNodeInfoCompat(obtain);
        obtain.setEnabled(true);
        obtain.setFocusable(true);
        accessibilityNodeInfoCompat.o(DEFAULT_CLASS_NAME);
        Rect rect = INVALID_PARENT_BOUNDS;
        accessibilityNodeInfoCompat.m(rect);
        obtain.setBoundsInScreen(rect);
        obtain.setParent(this.mHost);
        onPopulateNodeForVirtualView(i5, accessibilityNodeInfoCompat);
        if (accessibilityNodeInfoCompat.i() == null && obtain.getContentDescription() == null) {
            throw new RuntimeException("Callbacks must add text or a content description in populateNodeForVirtualViewId()");
        }
        accessibilityNodeInfoCompat.g(this.mTempParentRect);
        if (this.mTempParentRect.equals(rect)) {
            throw new RuntimeException("Callbacks must set parent bounds in populateNodeForVirtualViewId()");
        }
        int actions = obtain.getActions();
        if ((actions & 64) != 0) {
            throw new RuntimeException("Callbacks must not add ACTION_ACCESSIBILITY_FOCUS in populateNodeForVirtualViewId()");
        }
        if ((actions & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            throw new RuntimeException("Callbacks must not add ACTION_CLEAR_ACCESSIBILITY_FOCUS in populateNodeForVirtualViewId()");
        }
        obtain.setPackageName(this.mHost.getContext().getPackageName());
        View view = this.mHost;
        accessibilityNodeInfoCompat.f1552b = i5;
        obtain.setSource(view, i5);
        if (this.mAccessibilityFocusedVirtualViewId == i5) {
            obtain.setAccessibilityFocused(true);
            accessibilityNodeInfoCompat.a(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        } else {
            obtain.setAccessibilityFocused(false);
            accessibilityNodeInfoCompat.a(64);
        }
        boolean z5 = this.mKeyboardFocusedVirtualViewId == i5;
        if (z5) {
            accessibilityNodeInfoCompat.a(2);
        } else if (obtain.isFocusable()) {
            accessibilityNodeInfoCompat.a(1);
        }
        obtain.setFocused(z5);
        this.mHost.getLocationOnScreen(this.mTempGlobalRect);
        obtain.getBoundsInScreen(this.mTempScreenRect);
        if (this.mTempScreenRect.equals(rect)) {
            accessibilityNodeInfoCompat.g(this.mTempScreenRect);
            this.mTempScreenRect.offset(this.mTempGlobalRect[0] - this.mHost.getScrollX(), this.mTempGlobalRect[1] - this.mHost.getScrollY());
        }
        if (this.mHost.getLocalVisibleRect(this.mTempVisibleRect)) {
            this.mTempVisibleRect.offset(this.mTempGlobalRect[0] - this.mHost.getScrollX(), this.mTempGlobalRect[1] - this.mHost.getScrollY());
            if (this.mTempScreenRect.intersect(this.mTempVisibleRect)) {
                obtain.setBoundsInScreen(this.mTempScreenRect);
                Rect rect2 = this.mTempScreenRect;
                if (rect2 != null && !rect2.isEmpty() && this.mHost.getWindowVisibility() == 0) {
                    Object parent = this.mHost.getParent();
                    while (true) {
                        if (parent instanceof View) {
                            View view2 = (View) parent;
                            if (view2.getAlpha() <= 0.0f || view2.getVisibility() != 0) {
                                break;
                            }
                            parent = view2.getParent();
                        } else if (parent != null) {
                            accessibilityNodeInfoCompat.a.setVisibleToUser(true);
                        }
                    }
                }
            }
        }
        return accessibilityNodeInfoCompat;
    }

    public final boolean c(int i5, Rect rect) {
        Object obj;
        AccessibilityNodeInfoCompat accessibilityNodeInfoCompat;
        int d6;
        ArrayList arrayList = new ArrayList();
        getVisibleVirtualViews(arrayList);
        int i6 = 0;
        SparseArrayCompat sparseArrayCompat = new SparseArrayCompat(0);
        for (int i10 = 0; i10 < arrayList.size(); i10++) {
            sparseArrayCompat.e(((Integer) arrayList.get(i10)).intValue(), b(((Integer) arrayList.get(i10)).intValue()));
        }
        int i11 = this.mKeyboardFocusedVirtualViewId;
        AccessibilityNodeInfoCompat accessibilityNodeInfoCompat2 = i11 == Integer.MIN_VALUE ? null : (AccessibilityNodeInfoCompat) sparseArrayCompat.c(i11);
        int i12 = -1;
        if (i5 == 1 || i5 == 2) {
            View view = this.mHost;
            WeakHashMap weakHashMap = s0.a;
            boolean z5 = view.getLayoutDirection() == 1;
            FocusStrategy$CollectionAdapter focusStrategy$CollectionAdapter = SPARSE_VALUES_ADAPTER;
            FocusStrategy$BoundsAdapter focusStrategy$BoundsAdapter = NODE_ADAPTER;
            int f2 = focusStrategy$CollectionAdapter.f(sparseArrayCompat);
            ArrayList arrayList2 = new ArrayList(f2);
            for (int i13 = 0; i13 < f2; i13++) {
                arrayList2.add(focusStrategy$CollectionAdapter.c(sparseArrayCompat, i13));
            }
            Collections.sort(arrayList2, new b(z5, focusStrategy$BoundsAdapter));
            if (i5 == 1) {
                int size = arrayList2.size();
                if (accessibilityNodeInfoCompat2 != null) {
                    size = arrayList2.indexOf(accessibilityNodeInfoCompat2);
                }
                int i14 = size - 1;
                if (i14 >= 0) {
                    obj = arrayList2.get(i14);
                    accessibilityNodeInfoCompat = (AccessibilityNodeInfoCompat) obj;
                }
                obj = null;
                accessibilityNodeInfoCompat = (AccessibilityNodeInfoCompat) obj;
            } else {
                if (i5 != 2) {
                    throw new IllegalArgumentException("direction must be one of {FOCUS_FORWARD, FOCUS_BACKWARD}.");
                }
                int size2 = arrayList2.size();
                int lastIndexOf = (accessibilityNodeInfoCompat2 == null ? -1 : arrayList2.lastIndexOf(accessibilityNodeInfoCompat2)) + 1;
                if (lastIndexOf < size2) {
                    obj = arrayList2.get(lastIndexOf);
                    accessibilityNodeInfoCompat = (AccessibilityNodeInfoCompat) obj;
                }
                obj = null;
                accessibilityNodeInfoCompat = (AccessibilityNodeInfoCompat) obj;
            }
        } else {
            if (i5 != 17 && i5 != 33 && i5 != 66 && i5 != 130) {
                throw new IllegalArgumentException("direction must be one of {FOCUS_FORWARD, FOCUS_BACKWARD, FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
            }
            Rect rect2 = new Rect();
            int i15 = this.mKeyboardFocusedVirtualViewId;
            if (i15 != Integer.MIN_VALUE) {
                obtainAccessibilityNodeInfo(i15).g(rect2);
            } else if (rect != null) {
                rect2.set(rect);
            } else {
                View view2 = this.mHost;
                int width = view2.getWidth();
                int height = view2.getHeight();
                if (i5 == 17) {
                    rect2.set(width, 0, width, height);
                } else if (i5 == 33) {
                    rect2.set(0, height, width, height);
                } else if (i5 == 66) {
                    rect2.set(-1, 0, -1, height);
                } else {
                    if (i5 != 130) {
                        throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
                    }
                    rect2.set(0, -1, width, -1);
                }
            }
            FocusStrategy$CollectionAdapter focusStrategy$CollectionAdapter2 = SPARSE_VALUES_ADAPTER;
            FocusStrategy$BoundsAdapter focusStrategy$BoundsAdapter2 = NODE_ADAPTER;
            Rect rect3 = new Rect(rect2);
            if (i5 == 17) {
                rect3.offset(rect2.width() + 1, 0);
            } else if (i5 == 33) {
                rect3.offset(0, rect2.height() + 1);
            } else if (i5 == 66) {
                rect3.offset(-(rect2.width() + 1), 0);
            } else {
                if (i5 != 130) {
                    throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
                }
                rect3.offset(0, -(rect2.height() + 1));
            }
            int f10 = focusStrategy$CollectionAdapter2.f(sparseArrayCompat);
            Rect rect4 = new Rect();
            accessibilityNodeInfoCompat = null;
            for (int i16 = 0; i16 < f10; i16++) {
                AccessibilityNodeInfoCompat c6 = focusStrategy$CollectionAdapter2.c(sparseArrayCompat, i16);
                if (c6 != accessibilityNodeInfoCompat2) {
                    focusStrategy$BoundsAdapter2.o(c6, rect4);
                    if (n.Y(i5, rect2, rect4)) {
                        if (n.Y(i5, rect2, rect3) && !n.o(i5, rect2, rect4, rect3)) {
                            if (!n.o(i5, rect2, rect3, rect4)) {
                                int t02 = n.t0(i5, rect2, rect4);
                                int v02 = n.v0(i5, rect2, rect4);
                                int i17 = (v02 * v02) + (t02 * 13 * t02);
                                int t03 = n.t0(i5, rect2, rect3);
                                int v03 = n.v0(i5, rect2, rect3);
                                if (i17 >= (v03 * v03) + (t03 * 13 * t03)) {
                                }
                            }
                        }
                        rect3.set(rect4);
                        accessibilityNodeInfoCompat = c6;
                    }
                }
            }
        }
        AccessibilityNodeInfoCompat accessibilityNodeInfoCompat3 = accessibilityNodeInfoCompat;
        if (accessibilityNodeInfoCompat3 == null) {
            d6 = Integer.MIN_VALUE;
        } else {
            if (sparseArrayCompat.f1209d) {
                l.a(sparseArrayCompat);
            }
            int i18 = sparseArrayCompat.f1212v;
            while (true) {
                if (i6 >= i18) {
                    break;
                }
                if (sparseArrayCompat.f1211i[i6] == accessibilityNodeInfoCompat3) {
                    i12 = i6;
                    break;
                }
                i6++;
            }
            d6 = sparseArrayCompat.d(i12);
        }
        return requestKeyboardFocusForVirtualView(d6);
    }

    public final boolean clearKeyboardFocusForVirtualView(int i5) {
        if (this.mKeyboardFocusedVirtualViewId != i5) {
            return false;
        }
        this.mKeyboardFocusedVirtualViewId = Integer.MIN_VALUE;
        onVirtualViewKeyboardFocusChanged(i5, false);
        sendEventForVirtualView(i5, 8);
        return true;
    }

    public final boolean dispatchHoverEvent(@NonNull MotionEvent motionEvent) {
        int i5;
        if (!this.mManager.isEnabled() || !this.mManager.isTouchExplorationEnabled()) {
            return false;
        }
        int action = motionEvent.getAction();
        if (action == 7 || action == 9) {
            int virtualViewAt = getVirtualViewAt(motionEvent.getX(), motionEvent.getY());
            int i6 = this.mHoveredVirtualViewId;
            if (i6 != virtualViewAt) {
                this.mHoveredVirtualViewId = virtualViewAt;
                sendEventForVirtualView(virtualViewAt, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                sendEventForVirtualView(i6, IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER);
            }
            if (virtualViewAt == Integer.MIN_VALUE) {
                return false;
            }
        } else {
            if (action != 10 || (i5 = this.mHoveredVirtualViewId) == Integer.MIN_VALUE) {
                return false;
            }
            if (i5 != Integer.MIN_VALUE) {
                this.mHoveredVirtualViewId = Integer.MIN_VALUE;
                sendEventForVirtualView(Integer.MIN_VALUE, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                sendEventForVirtualView(i5, IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER);
                return true;
            }
        }
        return true;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public final boolean dispatchKeyEvent(@NonNull KeyEvent keyEvent) {
        int i5 = 0;
        if (keyEvent.getAction() != 1) {
            int keyCode = keyEvent.getKeyCode();
            if (keyCode != 61) {
                int i6 = 66;
                if (keyCode != 66) {
                    switch (keyCode) {
                        case 19:
                        case 20:
                        case 21:
                        case 22:
                            if (keyEvent.hasNoModifiers()) {
                                if (keyCode == 19) {
                                    i6 = 33;
                                } else if (keyCode == 21) {
                                    i6 = 17;
                                } else if (keyCode != 22) {
                                    i6 = 130;
                                }
                                int repeatCount = keyEvent.getRepeatCount() + 1;
                                boolean z5 = false;
                                while (i5 < repeatCount && c(i6, null)) {
                                    i5++;
                                    z5 = true;
                                }
                                return z5;
                            }
                            break;
                    }
                }
                if (keyEvent.hasNoModifiers() && keyEvent.getRepeatCount() == 0) {
                    int i10 = this.mKeyboardFocusedVirtualViewId;
                    if (i10 != Integer.MIN_VALUE) {
                        onPerformActionForVirtualView(i10, 16, null);
                    }
                    return true;
                }
            } else {
                if (keyEvent.hasNoModifiers()) {
                    return c(2, null);
                }
                if (keyEvent.hasModifiers(1)) {
                    return c(1, null);
                }
            }
        }
        return false;
    }

    public final int getAccessibilityFocusedVirtualViewId() {
        return this.mAccessibilityFocusedVirtualViewId;
    }

    /* JADX WARN: Type inference failed for: r1v3, types: [androidx.customview.widget.ExploreByTouchHelper$MyNodeProvider] */
    @Override // androidx.core.view.b
    public AccessibilityNodeProviderCompat getAccessibilityNodeProvider(View view) {
        if (this.mNodeProvider == null) {
            this.mNodeProvider = new AccessibilityNodeProviderCompat() { // from class: androidx.customview.widget.ExploreByTouchHelper$MyNodeProvider
                @Override // androidx.core.view.accessibility.AccessibilityNodeProviderCompat
                public final AccessibilityNodeInfoCompat a(int i5) {
                    return new AccessibilityNodeInfoCompat(AccessibilityNodeInfo.obtain(a.this.obtainAccessibilityNodeInfo(i5).a));
                }

                @Override // androidx.core.view.accessibility.AccessibilityNodeProviderCompat
                public final AccessibilityNodeInfoCompat b(int i5) {
                    a aVar = a.this;
                    int i6 = i5 == 2 ? aVar.mAccessibilityFocusedVirtualViewId : aVar.mKeyboardFocusedVirtualViewId;
                    if (i6 == Integer.MIN_VALUE) {
                        return null;
                    }
                    return a(i6);
                }

                @Override // androidx.core.view.accessibility.AccessibilityNodeProviderCompat
                public final boolean c(int i5, int i6, Bundle bundle) {
                    return a.this.performAction(i5, i6, bundle);
                }
            };
        }
        return this.mNodeProvider;
    }

    @Deprecated
    public int getFocusedVirtualView() {
        return getAccessibilityFocusedVirtualViewId();
    }

    public final int getKeyboardFocusedVirtualViewId() {
        return this.mKeyboardFocusedVirtualViewId;
    }

    public abstract int getVirtualViewAt(float f2, float f10);

    public abstract void getVisibleVirtualViews(List list);

    public final void invalidateRoot() {
        invalidateVirtualView(-1, 1);
    }

    public final void invalidateVirtualView(int i5) {
        invalidateVirtualView(i5, 0);
    }

    @NonNull
    public AccessibilityNodeInfoCompat obtainAccessibilityNodeInfo(int i5) {
        if (i5 != -1) {
            return b(i5);
        }
        AccessibilityNodeInfo obtain = AccessibilityNodeInfo.obtain(this.mHost);
        AccessibilityNodeInfoCompat accessibilityNodeInfoCompat = new AccessibilityNodeInfoCompat(obtain);
        View view = this.mHost;
        WeakHashMap weakHashMap = s0.a;
        view.onInitializeAccessibilityNodeInfo(obtain);
        ArrayList arrayList = new ArrayList();
        getVisibleVirtualViews(arrayList);
        if (obtain.getChildCount() > 0 && arrayList.size() > 0) {
            throw new RuntimeException("Views cannot have both real and virtual children");
        }
        int size = arrayList.size();
        for (int i6 = 0; i6 < size; i6++) {
            accessibilityNodeInfoCompat.a.addChild(this.mHost, ((Integer) arrayList.get(i6)).intValue());
        }
        return accessibilityNodeInfoCompat;
    }

    public final void onFocusChanged(boolean z5, int i5, Rect rect) {
        int i6 = this.mKeyboardFocusedVirtualViewId;
        if (i6 != Integer.MIN_VALUE) {
            clearKeyboardFocusForVirtualView(i6);
        }
        if (z5) {
            c(i5, rect);
        }
    }

    @Override // androidx.core.view.b
    public void onInitializeAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
        super.onInitializeAccessibilityEvent(view, accessibilityEvent);
        onPopulateEventForHost(accessibilityEvent);
    }

    @Override // androidx.core.view.b
    public void onInitializeAccessibilityNodeInfo(View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
        onPopulateNodeForHost(accessibilityNodeInfoCompat);
    }

    public abstract boolean onPerformActionForVirtualView(int i5, int i6, Bundle bundle);

    public void onPopulateEventForHost(@NonNull AccessibilityEvent accessibilityEvent) {
    }

    public void onPopulateEventForVirtualView(int i5, @NonNull AccessibilityEvent accessibilityEvent) {
    }

    public void onPopulateNodeForHost(@NonNull AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
    }

    public abstract void onPopulateNodeForVirtualView(int i5, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat);

    public void onVirtualViewKeyboardFocusChanged(int i5, boolean z5) {
    }

    public boolean performAction(int i5, int i6, Bundle bundle) {
        int i10;
        if (i5 == -1) {
            View view = this.mHost;
            WeakHashMap weakHashMap = s0.a;
            return view.performAccessibilityAction(i6, bundle);
        }
        if (i6 == 1) {
            return requestKeyboardFocusForVirtualView(i5);
        }
        if (i6 == 2) {
            return clearKeyboardFocusForVirtualView(i5);
        }
        if (i6 != 64) {
            if (i6 != 128) {
                return onPerformActionForVirtualView(i5, i6, bundle);
            }
            if (this.mAccessibilityFocusedVirtualViewId != i5) {
                return false;
            }
            this.mAccessibilityFocusedVirtualViewId = Integer.MIN_VALUE;
            this.mHost.invalidate();
            sendEventForVirtualView(i5, KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT);
            return true;
        }
        if (!this.mManager.isEnabled() || !this.mManager.isTouchExplorationEnabled() || (i10 = this.mAccessibilityFocusedVirtualViewId) == i5) {
            return false;
        }
        if (i10 != Integer.MIN_VALUE) {
            this.mAccessibilityFocusedVirtualViewId = Integer.MIN_VALUE;
            this.mHost.invalidate();
            sendEventForVirtualView(i10, KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT);
        }
        this.mAccessibilityFocusedVirtualViewId = i5;
        this.mHost.invalidate();
        sendEventForVirtualView(i5, PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS);
        return true;
    }

    public final boolean requestKeyboardFocusForVirtualView(int i5) {
        int i6;
        if ((!this.mHost.isFocused() && !this.mHost.requestFocus()) || (i6 = this.mKeyboardFocusedVirtualViewId) == i5) {
            return false;
        }
        if (i6 != Integer.MIN_VALUE) {
            clearKeyboardFocusForVirtualView(i6);
        }
        if (i5 == Integer.MIN_VALUE) {
            return false;
        }
        this.mKeyboardFocusedVirtualViewId = i5;
        onVirtualViewKeyboardFocusChanged(i5, true);
        sendEventForVirtualView(i5, 8);
        return true;
    }

    public final boolean sendEventForVirtualView(int i5, int i6) {
        ViewParent parent;
        if (i5 == Integer.MIN_VALUE || !this.mManager.isEnabled() || (parent = this.mHost.getParent()) == null) {
            return false;
        }
        return parent.requestSendAccessibilityEvent(this.mHost, a(i5, i6));
    }

    public final void invalidateVirtualView(int i5, int i6) {
        ViewParent parent;
        if (i5 == Integer.MIN_VALUE || !this.mManager.isEnabled() || (parent = this.mHost.getParent()) == null) {
            return;
        }
        AccessibilityEvent a = a(i5, RecyclerView.ItemAnimator.FLAG_MOVED);
        a.setContentChangeTypes(i6);
        parent.requestSendAccessibilityEvent(this.mHost, a);
    }
}
