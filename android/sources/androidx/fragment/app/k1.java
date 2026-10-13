package androidx.fragment.app;

import android.content.res.Resources;
import android.os.BadParcelableException;
import android.os.Bundle;
import android.os.Parcelable;
import android.util.Log;
import android.util.SparseArray;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import androidx.lifecycle.Lifecycle;
import com.discord.R;
import com.discord.jank_stats.JankScreenContext;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.WeakHashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class k1 {
    public final l0 a;

    /* renamed from: b, reason: collision with root package name */
    public final l1 f2035b;

    /* renamed from: c, reason: collision with root package name */
    public final Fragment f2036c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f2037d = false;

    /* renamed from: e, reason: collision with root package name */
    public int f2038e = -1;

    public k1(l0 l0Var, l1 l1Var, Fragment fragment) {
        this.a = l0Var;
        this.f2035b = l1Var;
        this.f2036c = fragment;
    }

    public final void a() {
        boolean M = FragmentManager.M(3);
        Fragment fragment = this.f2036c;
        if (M) {
            Log.d("FragmentManager", "moveto ACTIVITY_CREATED: " + fragment);
        }
        Bundle bundle = fragment.mSavedFragmentState;
        Bundle bundle2 = bundle != null ? bundle.getBundle("savedInstanceState") : null;
        fragment.performActivityCreated(bundle2);
        this.a.a(fragment, bundle2, false);
    }

    public final void b() {
        View view;
        View view2;
        Fragment fragment = this.f2036c;
        Fragment expectedParentFragment = FragmentManager.F(fragment.mContainer);
        Fragment parentFragment = fragment.getParentFragment();
        if (expectedParentFragment != null && !expectedParentFragment.equals(parentFragment)) {
            int i5 = fragment.mContainerId;
            p2.c cVar = p2.d.a;
            Intrinsics.checkNotNullParameter(fragment, "fragment");
            Intrinsics.checkNotNullParameter(expectedParentFragment, "expectedParentFragment");
            Intrinsics.checkNotNullParameter(fragment, "fragment");
            Intrinsics.checkNotNullParameter(expectedParentFragment, "expectedParentFragment");
            StringBuilder sb2 = new StringBuilder("Attempting to nest fragment ");
            sb2.append(fragment);
            sb2.append(" within the view of parent fragment ");
            sb2.append(expectedParentFragment);
            sb2.append(" via container with ID ");
            p2.o oVar = new p2.o(fragment, k0.d.m(sb2, i5, " without using parent's childFragmentManager"));
            p2.d.c(oVar);
            p2.c a = p2.d.a(fragment);
            if (a.a.contains(p2.b.f16302w) && p2.d.e(a, fragment.getClass(), p2.o.class)) {
                p2.d.b(a, oVar);
            }
        }
        ArrayList arrayList = this.f2035b.a;
        ViewGroup viewGroup = fragment.mContainer;
        int i6 = -1;
        if (viewGroup != null) {
            int indexOf = arrayList.indexOf(fragment);
            int i10 = indexOf - 1;
            while (true) {
                if (i10 < 0) {
                    while (true) {
                        indexOf++;
                        if (indexOf >= arrayList.size()) {
                            break;
                        }
                        Fragment fragment2 = (Fragment) arrayList.get(indexOf);
                        if (fragment2.mContainer == viewGroup && (view = fragment2.mView) != null) {
                            i6 = viewGroup.indexOfChild(view);
                            break;
                        }
                    }
                } else {
                    Fragment fragment3 = (Fragment) arrayList.get(i10);
                    if (fragment3.mContainer == viewGroup && (view2 = fragment3.mView) != null) {
                        i6 = viewGroup.indexOfChild(view2) + 1;
                        break;
                    }
                    i10--;
                }
            }
        }
        fragment.mContainer.addView(fragment.mView, i6);
    }

    public final void c() {
        boolean M = FragmentManager.M(3);
        Fragment fragment = this.f2036c;
        if (M) {
            Log.d("FragmentManager", "moveto ATTACHED: " + fragment);
        }
        Fragment fragment2 = fragment.mTarget;
        k1 k1Var = null;
        l1 l1Var = this.f2035b;
        if (fragment2 != null) {
            k1 k1Var2 = (k1) l1Var.f2040b.get(fragment2.mWho);
            if (k1Var2 == null) {
                throw new IllegalStateException("Fragment " + fragment + " declared target fragment " + fragment.mTarget + " that does not belong to this FragmentManager!");
            }
            fragment.mTargetWho = fragment.mTarget.mWho;
            fragment.mTarget = null;
            k1Var = k1Var2;
        } else {
            String str = fragment.mTargetWho;
            if (str != null && (k1Var = (k1) l1Var.f2040b.get(str)) == null) {
                StringBuilder sb2 = new StringBuilder("Fragment ");
                sb2.append(fragment);
                sb2.append(" declared target fragment ");
                throw new IllegalStateException(com.discord.chat.bridge.botuikit.a.j(sb2, fragment.mTargetWho, " that does not belong to this FragmentManager!"));
            }
        }
        if (k1Var != null) {
            k1Var.k();
        }
        FragmentManager fragmentManager = fragment.mFragmentManager;
        fragment.mHost = fragmentManager.f1933w;
        fragment.mParentFragment = fragmentManager.f1935y;
        l0 l0Var = this.a;
        l0Var.g(fragment, false);
        fragment.performAttach();
        l0Var.b(fragment, false);
    }

    public final int d() {
        Fragment fragment = this.f2036c;
        if (fragment.mFragmentManager == null) {
            return fragment.mState;
        }
        int i5 = this.f2038e;
        int ordinal = fragment.mMaxState.ordinal();
        if (ordinal == 1) {
            i5 = Math.min(i5, 0);
        } else if (ordinal == 2) {
            i5 = Math.min(i5, 1);
        } else if (ordinal == 3) {
            i5 = Math.min(i5, 5);
        } else if (ordinal != 4) {
            i5 = Math.min(i5, -1);
        }
        if (fragment.mFromLayout) {
            if (fragment.mInLayout) {
                i5 = Math.max(this.f2038e, 2);
                View view = fragment.mView;
                if (view != null && view.getParent() == null) {
                    i5 = Math.min(i5, 2);
                }
            } else {
                i5 = this.f2038e < 4 ? Math.min(i5, fragment.mState) : Math.min(i5, 1);
            }
        }
        if (fragment.mInDynamicContainer && fragment.mContainer == null) {
            i5 = Math.min(i5, 4);
        }
        if (!fragment.mAdded) {
            i5 = Math.min(i5, 1);
        }
        ViewGroup viewGroup = fragment.mContainer;
        if (viewGroup != null) {
            c2 j = c2.j(viewGroup, fragment.getParentFragmentManager());
            Intrinsics.checkNotNullParameter(this, "fragmentStateManager");
            Intrinsics.checkNotNullExpressionValue(fragment, "fragmentStateManager.fragment");
            y1 g6 = j.g(fragment);
            z1 z1Var = g6 != null ? g6.f2124b : null;
            y1 h6 = j.h(fragment);
            r9 = h6 != null ? h6.f2124b : null;
            int i6 = z1Var == null ? -1 : b2.a[z1Var.ordinal()];
            if (i6 != -1 && i6 != 1) {
                r9 = z1Var;
            }
        }
        if (r9 == z1.f2134e) {
            i5 = Math.min(i5, 6);
        } else if (r9 == z1.f2135i) {
            i5 = Math.max(i5, 3);
        } else if (fragment.mRemoving) {
            i5 = fragment.isInBackStack() ? Math.min(i5, 1) : Math.min(i5, -1);
        }
        if (fragment.mDeferStart && fragment.mState < 5) {
            i5 = Math.min(i5, 4);
        }
        if (fragment.mTransitioning) {
            i5 = Math.max(i5, 3);
        }
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "computeExpectedState() of " + i5 + " for " + fragment);
        }
        return i5;
    }

    public final void e() {
        boolean M = FragmentManager.M(3);
        Fragment fragment = this.f2036c;
        if (M) {
            Log.d("FragmentManager", "moveto CREATED: " + fragment);
        }
        Bundle bundle = fragment.mSavedFragmentState;
        Bundle bundle2 = bundle != null ? bundle.getBundle("savedInstanceState") : null;
        if (fragment.mIsCreated) {
            fragment.mState = 1;
            fragment.restoreChildFragmentState();
        } else {
            l0 l0Var = this.a;
            l0Var.h(fragment, bundle2, false);
            fragment.performCreate(bundle2);
            l0Var.c(fragment, bundle2, false);
        }
    }

    public final void f() {
        String str;
        Fragment fragment = this.f2036c;
        if (fragment.mFromLayout) {
            return;
        }
        if (FragmentManager.M(3)) {
            Log.d("FragmentManager", "moveto CREATE_VIEW: " + fragment);
        }
        Bundle bundle = fragment.mSavedFragmentState;
        ViewGroup container = null;
        Bundle bundle2 = bundle != null ? bundle.getBundle("savedInstanceState") : null;
        LayoutInflater performGetLayoutInflater = fragment.performGetLayoutInflater(bundle2);
        ViewGroup viewGroup = fragment.mContainer;
        if (viewGroup != null) {
            container = viewGroup;
        } else {
            int i5 = fragment.mContainerId;
            if (i5 != 0) {
                if (i5 == -1) {
                    throw new IllegalArgumentException(a3.e.j("Cannot create fragment ", fragment, " for a container view with no id"));
                }
                container = (ViewGroup) fragment.mFragmentManager.f1934x.b(i5);
                if (container == null) {
                    if (!fragment.mRestored && !fragment.mInDynamicContainer) {
                        try {
                            str = fragment.getResources().getResourceName(fragment.mContainerId);
                        } catch (Resources.NotFoundException unused) {
                            str = JankScreenContext.UNKNOWN_SCREEN;
                        }
                        throw new IllegalArgumentException("No view found for id 0x" + Integer.toHexString(fragment.mContainerId) + " (" + str + ") for fragment " + fragment);
                    }
                } else if (!(container instanceof FragmentContainerView)) {
                    p2.c cVar = p2.d.a;
                    Intrinsics.checkNotNullParameter(fragment, "fragment");
                    Intrinsics.checkNotNullParameter(container, "container");
                    p2.n nVar = new p2.n(fragment, container);
                    p2.d.c(nVar);
                    p2.c a = p2.d.a(fragment);
                    if (a.a.contains(p2.b.F) && p2.d.e(a, fragment.getClass(), p2.n.class)) {
                        p2.d.b(a, nVar);
                    }
                }
            }
        }
        fragment.mContainer = container;
        fragment.performCreateView(performGetLayoutInflater, container, bundle2);
        if (fragment.mView != null) {
            if (FragmentManager.M(3)) {
                Log.d("FragmentManager", "moveto VIEW_CREATED: " + fragment);
            }
            fragment.mView.setSaveFromParentEnabled(false);
            fragment.mView.setTag(R.id.fragment_container_view_tag, fragment);
            if (container != null) {
                b();
            }
            if (fragment.mHidden) {
                fragment.mView.setVisibility(8);
            }
            if (fragment.mView.isAttachedToWindow()) {
                View view = fragment.mView;
                WeakHashMap weakHashMap = androidx.core.view.s0.a;
                androidx.core.view.h0.c(view);
            } else {
                View view2 = fragment.mView;
                view2.addOnAttachStateChangeListener(new j1(view2));
            }
            fragment.performViewCreated();
            this.a.m(fragment, fragment.mView, bundle2, false);
            int visibility = fragment.mView.getVisibility();
            fragment.setPostOnViewCreatedAlpha(fragment.mView.getAlpha());
            if (fragment.mContainer != null && visibility == 0) {
                View findFocus = fragment.mView.findFocus();
                if (findFocus != null) {
                    fragment.setFocusedView(findFocus);
                    if (FragmentManager.M(2)) {
                        Log.v("FragmentManager", "requestFocus: Saved focused view " + findFocus + " for Fragment " + fragment);
                    }
                }
                fragment.mView.setAlpha(0.0f);
            }
        }
        fragment.mState = 2;
    }

    public final void g() {
        Fragment b10;
        boolean M = FragmentManager.M(3);
        Fragment fragment = this.f2036c;
        if (M) {
            Log.d("FragmentManager", "movefrom CREATED: " + fragment);
        }
        boolean z5 = true;
        boolean z6 = fragment.mRemoving && !fragment.isInBackStack();
        l1 l1Var = this.f2035b;
        if (z6 && !fragment.mBeingSaved) {
            l1Var.i(fragment.mWho, null);
        }
        if (!z6) {
            g1 g1Var = l1Var.f2042d;
            if (!((g1Var.f2009b.containsKey(fragment.mWho) && g1Var.f2012e) ? g1Var.f2013f : true)) {
                String str = fragment.mTargetWho;
                if (str != null && (b10 = l1Var.b(str)) != null && b10.mRetainInstance) {
                    fragment.mTarget = b10;
                }
                fragment.mState = 0;
                return;
            }
        }
        FragmentHostCallback fragmentHostCallback = fragment.mHost;
        if (fragmentHostCallback instanceof androidx.lifecycle.d1) {
            z5 = l1Var.f2042d.f2013f;
        } else {
            FragmentActivity fragmentActivity = fragmentHostCallback.f1911e;
            if (fragmentActivity != null) {
                z5 = true ^ fragmentActivity.isChangingConfigurations();
            }
        }
        if ((z6 && !fragment.mBeingSaved) || z5) {
            l1Var.f2042d.d(fragment, false);
        }
        fragment.performDestroy();
        this.a.d(fragment, false);
        Iterator it = l1Var.d().iterator();
        while (it.hasNext()) {
            k1 k1Var = (k1) it.next();
            if (k1Var != null) {
                Fragment fragment2 = k1Var.f2036c;
                if (fragment.mWho.equals(fragment2.mTargetWho)) {
                    fragment2.mTarget = fragment;
                    fragment2.mTargetWho = null;
                }
            }
        }
        String str2 = fragment.mTargetWho;
        if (str2 != null) {
            fragment.mTarget = l1Var.b(str2);
        }
        l1Var.h(this);
    }

    public final void h() {
        View view;
        boolean M = FragmentManager.M(3);
        Fragment fragment = this.f2036c;
        if (M) {
            Log.d("FragmentManager", "movefrom CREATE_VIEW: " + fragment);
        }
        ViewGroup viewGroup = fragment.mContainer;
        if (viewGroup != null && (view = fragment.mView) != null) {
            viewGroup.removeView(view);
        }
        fragment.performDestroyView();
        this.a.n(fragment, false);
        fragment.mContainer = null;
        fragment.mView = null;
        fragment.mViewLifecycleOwner = null;
        fragment.mViewLifecycleOwnerLiveData.h(null);
        fragment.mInLayout = false;
    }

    public final void i() {
        boolean M = FragmentManager.M(3);
        Fragment fragment = this.f2036c;
        if (M) {
            Log.d("FragmentManager", "movefrom ATTACHED: " + fragment);
        }
        fragment.performDetach();
        this.a.e(fragment, false);
        fragment.mState = -1;
        fragment.mHost = null;
        fragment.mParentFragment = null;
        fragment.mFragmentManager = null;
        if (!fragment.mRemoving || fragment.isInBackStack()) {
            g1 g1Var = this.f2035b.f2042d;
            if (!((g1Var.f2009b.containsKey(fragment.mWho) && g1Var.f2012e) ? g1Var.f2013f : true)) {
                return;
            }
        }
        if (FragmentManager.M(3)) {
            Log.d("FragmentManager", "initState called for fragment: " + fragment);
        }
        fragment.initState();
    }

    public final void j() {
        Fragment fragment = this.f2036c;
        if (fragment.mFromLayout && fragment.mInLayout && !fragment.mPerformedCreateView) {
            if (FragmentManager.M(3)) {
                Log.d("FragmentManager", "moveto CREATE_VIEW: " + fragment);
            }
            Bundle bundle = fragment.mSavedFragmentState;
            Bundle bundle2 = bundle != null ? bundle.getBundle("savedInstanceState") : null;
            fragment.performCreateView(fragment.performGetLayoutInflater(bundle2), null, bundle2);
            View view = fragment.mView;
            if (view != null) {
                view.setSaveFromParentEnabled(false);
                fragment.mView.setTag(R.id.fragment_container_view_tag, fragment);
                if (fragment.mHidden) {
                    fragment.mView.setVisibility(8);
                }
                fragment.performViewCreated();
                this.a.m(fragment, fragment.mView, bundle2, false);
                fragment.mState = 2;
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:54:0x019f, code lost:
    
        continue;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void k() {
        ViewGroup viewGroup;
        ViewGroup viewGroup2;
        ViewGroup viewGroup3;
        boolean z5 = this.f2037d;
        Fragment fragment = this.f2036c;
        if (z5) {
            if (FragmentManager.M(2)) {
                Log.v("FragmentManager", "Ignoring re-entrant call to moveToExpectedState() for " + fragment);
                return;
            }
            return;
        }
        try {
            this.f2037d = true;
            boolean z6 = false;
            while (true) {
                int d6 = d();
                int i5 = fragment.mState;
                a2 a2Var = a2.f1962e;
                a2 a2Var2 = a2.f1963i;
                l1 l1Var = this.f2035b;
                if (d6 == i5) {
                    if (!z6 && i5 == -1 && fragment.mRemoving && !fragment.isInBackStack() && !fragment.mBeingSaved) {
                        if (FragmentManager.M(3)) {
                            Log.d("FragmentManager", "Cleaning up state of never attached fragment: " + fragment);
                        }
                        l1Var.f2042d.d(fragment, true);
                        l1Var.h(this);
                        if (FragmentManager.M(3)) {
                            Log.d("FragmentManager", "initState called for fragment: " + fragment);
                        }
                        fragment.initState();
                    }
                    if (fragment.mHiddenChanged) {
                        if (fragment.mView != null && (viewGroup = fragment.mContainer) != null) {
                            c2 j = c2.j(viewGroup, fragment.getParentFragmentManager());
                            boolean z7 = fragment.mHidden;
                            z1 z1Var = z1.f2133d;
                            if (z7) {
                                Intrinsics.checkNotNullParameter(this, "fragmentStateManager");
                                if (FragmentManager.M(2)) {
                                    Log.v("FragmentManager", "SpecialEffectsController: Enqueuing hide operation for fragment " + fragment);
                                }
                                j.d(a2Var2, z1Var, this);
                            } else {
                                Intrinsics.checkNotNullParameter(this, "fragmentStateManager");
                                if (FragmentManager.M(2)) {
                                    Log.v("FragmentManager", "SpecialEffectsController: Enqueuing show operation for fragment " + fragment);
                                }
                                j.d(a2Var, z1Var, this);
                            }
                        }
                        FragmentManager fragmentManager = fragment.mFragmentManager;
                        if (fragmentManager != null && fragment.mAdded && FragmentManager.N(fragment)) {
                            fragmentManager.G = true;
                        }
                        fragment.mHiddenChanged = false;
                        fragment.onHiddenChanged(fragment.mHidden);
                        fragment.mChildFragmentManager.o();
                    }
                    this.f2037d = false;
                    return;
                }
                l0 l0Var = this.a;
                if (d6 <= i5) {
                    switch (i5 - 1) {
                        case -1:
                            i();
                            break;
                        case 0:
                            if (fragment.mBeingSaved) {
                                if (((Bundle) l1Var.f2041c.get(fragment.mWho)) == null) {
                                    l1Var.i(fragment.mWho, n());
                                }
                            }
                            g();
                            break;
                        case 1:
                            h();
                            fragment.mState = 1;
                            break;
                        case 2:
                            fragment.mInLayout = false;
                            fragment.mState = 2;
                            break;
                        case 3:
                            if (FragmentManager.M(3)) {
                                Log.d("FragmentManager", "movefrom ACTIVITY_CREATED: " + fragment);
                            }
                            if (fragment.mBeingSaved) {
                                l1Var.i(fragment.mWho, n());
                            } else if (fragment.mView != null && fragment.mSavedViewState == null) {
                                o();
                            }
                            if (fragment.mView != null && (viewGroup2 = fragment.mContainer) != null) {
                                c2 j5 = c2.j(viewGroup2, fragment.getParentFragmentManager());
                                Intrinsics.checkNotNullParameter(this, "fragmentStateManager");
                                if (FragmentManager.M(2)) {
                                    Log.v("FragmentManager", "SpecialEffectsController: Enqueuing remove operation for fragment " + fragment);
                                }
                                j5.d(a2.f1961d, z1.f2135i, this);
                            }
                            fragment.mState = 3;
                            break;
                        case 4:
                            if (FragmentManager.M(3)) {
                                Log.d("FragmentManager", "movefrom STARTED: " + fragment);
                            }
                            fragment.performStop();
                            l0Var.l(fragment, false);
                            break;
                        case 5:
                            fragment.mState = 5;
                            break;
                        case 6:
                            if (FragmentManager.M(3)) {
                                Log.d("FragmentManager", "movefrom RESUMED: " + fragment);
                            }
                            fragment.performPause();
                            l0Var.f(fragment, false);
                            break;
                    }
                } else {
                    switch (i5 + 1) {
                        case 0:
                            c();
                            break;
                        case 1:
                            e();
                            break;
                        case 2:
                            j();
                            f();
                            break;
                        case 3:
                            a();
                            break;
                        case 4:
                            if (fragment.mView != null && (viewGroup3 = fragment.mContainer) != null) {
                                c2 j7 = c2.j(viewGroup3, fragment.getParentFragmentManager());
                                int visibility = fragment.mView.getVisibility();
                                if (visibility != 0) {
                                    if (visibility == 4) {
                                        a2Var = a2.f1964v;
                                    } else {
                                        if (visibility != 8) {
                                            throw new IllegalArgumentException("Unknown visibility " + visibility);
                                        }
                                        a2Var = a2Var2;
                                    }
                                }
                                j7.e(a2Var, this);
                            }
                            fragment.mState = 4;
                            break;
                        case 5:
                            if (FragmentManager.M(3)) {
                                Log.d("FragmentManager", "moveto STARTED: " + fragment);
                            }
                            fragment.performStart();
                            l0Var.k(fragment, false);
                            break;
                        case 6:
                            fragment.mState = 6;
                            break;
                        case 7:
                            m();
                            break;
                    }
                }
                z6 = true;
            }
        } catch (Throwable th2) {
            this.f2037d = false;
            throw th2;
        }
    }

    public final void l(ClassLoader classLoader) {
        Fragment fragment = this.f2036c;
        Bundle bundle = fragment.mSavedFragmentState;
        if (bundle == null) {
            return;
        }
        bundle.setClassLoader(classLoader);
        if (fragment.mSavedFragmentState.getBundle("savedInstanceState") == null) {
            fragment.mSavedFragmentState.putBundle("savedInstanceState", new Bundle());
        }
        try {
            fragment.mSavedViewState = fragment.mSavedFragmentState.getSparseParcelableArray("viewState");
            fragment.mSavedViewRegistryState = fragment.mSavedFragmentState.getBundle("viewRegistryState");
            i1 i1Var = (i1) fragment.mSavedFragmentState.getParcelable("state");
            if (i1Var != null) {
                fragment.mTargetWho = i1Var.J;
                fragment.mTargetRequestCode = i1Var.K;
                Boolean bool = fragment.mSavedUserVisibleHint;
                if (bool != null) {
                    fragment.mUserVisibleHint = bool.booleanValue();
                    fragment.mSavedUserVisibleHint = null;
                } else {
                    fragment.mUserVisibleHint = i1Var.L;
                }
            }
            if (fragment.mUserVisibleHint) {
                return;
            }
            fragment.mDeferStart = true;
        } catch (BadParcelableException e9) {
            throw new IllegalStateException("Failed to restore view hierarchy state for fragment " + fragment, e9);
        }
    }

    public final void m() {
        boolean M = FragmentManager.M(3);
        Fragment fragment = this.f2036c;
        if (M) {
            Log.d("FragmentManager", "moveto RESUMED: " + fragment);
        }
        View focusedView = fragment.getFocusedView();
        if (focusedView != null) {
            if (focusedView != fragment.mView) {
                for (ViewParent parent = focusedView.getParent(); parent != null; parent = parent.getParent()) {
                    if (parent != fragment.mView) {
                    }
                }
            }
            boolean requestFocus = focusedView.requestFocus();
            if (FragmentManager.M(2)) {
                StringBuilder sb2 = new StringBuilder("requestFocus: Restoring focused view ");
                sb2.append(focusedView);
                sb2.append(" ");
                sb2.append(requestFocus ? "succeeded" : "failed");
                sb2.append(" on Fragment ");
                sb2.append(fragment);
                sb2.append(" resulting in focused view ");
                sb2.append(fragment.mView.findFocus());
                Log.v("FragmentManager", sb2.toString());
            }
        }
        fragment.setFocusedView(null);
        fragment.performResume();
        this.a.i(fragment, false);
        this.f2035b.i(fragment.mWho, null);
        fragment.mSavedFragmentState = null;
        fragment.mSavedViewState = null;
        fragment.mSavedViewRegistryState = null;
    }

    public final Bundle n() {
        Bundle bundle;
        Bundle bundle2 = new Bundle();
        Fragment fragment = this.f2036c;
        if (fragment.mState == -1 && (bundle = fragment.mSavedFragmentState) != null) {
            bundle2.putAll(bundle);
        }
        bundle2.putParcelable("state", new i1(fragment));
        if (fragment.mState > 0) {
            Bundle bundle3 = new Bundle();
            fragment.performSaveInstanceState(bundle3);
            if (!bundle3.isEmpty()) {
                bundle2.putBundle("savedInstanceState", bundle3);
            }
            this.a.j(fragment, bundle3, false);
            Bundle bundle4 = new Bundle();
            fragment.mSavedStateRegistryController.b(bundle4);
            if (!bundle4.isEmpty()) {
                bundle2.putBundle("registryState", bundle4);
            }
            Bundle a0 = fragment.mChildFragmentManager.a0();
            if (!a0.isEmpty()) {
                bundle2.putBundle("childFragmentManager", a0);
            }
            if (fragment.mView != null) {
                o();
            }
            SparseArray<Parcelable> sparseArray = fragment.mSavedViewState;
            if (sparseArray != null) {
                bundle2.putSparseParcelableArray("viewState", sparseArray);
            }
            Bundle bundle5 = fragment.mSavedViewRegistryState;
            if (bundle5 != null) {
                bundle2.putBundle("viewRegistryState", bundle5);
            }
        }
        Bundle bundle6 = fragment.mArguments;
        if (bundle6 != null) {
            bundle2.putBundle("arguments", bundle6);
        }
        return bundle2;
    }

    public final void o() {
        Fragment fragment = this.f2036c;
        if (fragment.mView == null) {
            return;
        }
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Saving view state for fragment " + fragment + " with view " + fragment.mView);
        }
        SparseArray<Parcelable> sparseArray = new SparseArray<>();
        fragment.mView.saveHierarchyState(sparseArray);
        if (sparseArray.size() > 0) {
            fragment.mSavedViewState = sparseArray;
        }
        Bundle bundle = new Bundle();
        fragment.mViewLifecycleOwner.f1955w.b(bundle);
        if (bundle.isEmpty()) {
            return;
        }
        fragment.mSavedViewRegistryState = bundle;
    }

    public k1(l0 l0Var, l1 l1Var, ClassLoader classLoader, u0 u0Var, Bundle bundle) {
        this.a = l0Var;
        this.f2035b = l1Var;
        i1 i1Var = (i1) bundle.getParcelable("state");
        Fragment instantiate = Fragment.instantiate(u0Var.a.f1933w.f1911e, i1Var.f2024d, null);
        instantiate.mWho = i1Var.f2025e;
        instantiate.mFromLayout = i1Var.f2026i;
        instantiate.mInDynamicContainer = i1Var.f2027v;
        instantiate.mRestored = true;
        instantiate.mFragmentId = i1Var.f2028w;
        instantiate.mContainerId = i1Var.f2029x;
        instantiate.mTag = i1Var.f2030y;
        instantiate.mRetainInstance = i1Var.E;
        instantiate.mRemoving = i1Var.F;
        instantiate.mDetached = i1Var.G;
        instantiate.mHidden = i1Var.H;
        instantiate.mMaxState = Lifecycle.State.values()[i1Var.I];
        instantiate.mTargetWho = i1Var.J;
        instantiate.mTargetRequestCode = i1Var.K;
        instantiate.mUserVisibleHint = i1Var.L;
        this.f2036c = instantiate;
        instantiate.mSavedFragmentState = bundle;
        Bundle bundle2 = bundle.getBundle("arguments");
        if (bundle2 != null) {
            bundle2.setClassLoader(classLoader);
        }
        instantiate.setArguments(bundle2);
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Instantiated fragment " + instantiate);
        }
    }

    public k1(l0 l0Var, l1 l1Var, Fragment fragment, Bundle bundle) {
        this.a = l0Var;
        this.f2035b = l1Var;
        this.f2036c = fragment;
        fragment.mSavedViewState = null;
        fragment.mSavedViewRegistryState = null;
        fragment.mBackStackNesting = 0;
        fragment.mInLayout = false;
        fragment.mAdded = false;
        Fragment fragment2 = fragment.mTarget;
        fragment.mTargetWho = fragment2 != null ? fragment2.mWho : null;
        fragment.mTarget = null;
        fragment.mSavedFragmentState = bundle;
        fragment.mArguments = bundle.getBundle("arguments");
    }
}
