package androidx.fragment.app;

import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class o0 implements LayoutInflater.Factory2 {

    /* renamed from: d, reason: collision with root package name */
    public final FragmentManager f2066d;

    public o0(FragmentManager fragmentManager) {
        this.f2066d = fragmentManager;
    }

    @Override // android.view.LayoutInflater.Factory
    public final View onCreateView(String str, Context context, AttributeSet attributeSet) {
        return onCreateView(null, str, context, attributeSet);
    }

    @Override // android.view.LayoutInflater.Factory2
    public final View onCreateView(View view, String str, Context context, AttributeSet attributeSet) {
        boolean z5;
        k1 g6;
        boolean equals = FragmentContainerView.class.getName().equals(str);
        FragmentManager fragmentManager = this.f2066d;
        if (equals) {
            return new FragmentContainerView(context, attributeSet, fragmentManager);
        }
        if ("fragment".equals(str)) {
            String attributeValue = attributeSet.getAttributeValue(null, "class");
            TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, o2.a.a);
            if (attributeValue == null) {
                attributeValue = obtainStyledAttributes.getString(0);
            }
            int resourceId = obtainStyledAttributes.getResourceId(1, -1);
            String string = obtainStyledAttributes.getString(2);
            obtainStyledAttributes.recycle();
            if (attributeValue != null) {
                try {
                    z5 = Fragment.class.isAssignableFrom(u0.a(context.getClassLoader(), attributeValue));
                } catch (ClassNotFoundException unused) {
                    z5 = false;
                }
                if (z5) {
                    int id2 = view != null ? view.getId() : 0;
                    if (id2 == -1 && resourceId == -1 && string == null) {
                        throw new IllegalArgumentException(attributeSet.getPositionDescription() + ": Must specify unique android:id, android:tag, or have a parent with an id for " + attributeValue);
                    }
                    Fragment fragment = resourceId != -1 ? fragmentManager.D(resourceId) : null;
                    if (fragment == null && string != null) {
                        fragment = fragmentManager.E(string);
                    }
                    if (fragment == null && id2 != -1) {
                        fragment = fragmentManager.D(id2);
                    }
                    if (fragment == null) {
                        u0 J = fragmentManager.J();
                        context.getClassLoader();
                        fragment = Fragment.instantiate(J.a.f1933w.f1911e, attributeValue, null);
                        fragment.mFromLayout = true;
                        fragment.mFragmentId = resourceId != 0 ? resourceId : id2;
                        fragment.mContainerId = id2;
                        fragment.mTag = string;
                        fragment.mInLayout = true;
                        fragment.mFragmentManager = fragmentManager;
                        FragmentHostCallback fragmentHostCallback = fragmentManager.f1933w;
                        fragment.mHost = fragmentHostCallback;
                        fragment.onInflate((Context) fragmentHostCallback.f1911e, attributeSet, fragment.mSavedFragmentState);
                        g6 = fragmentManager.a(fragment);
                        if (FragmentManager.M(2)) {
                            Log.v("FragmentManager", "Fragment " + fragment + " has been inflated via the <fragment> tag: id=0x" + Integer.toHexString(resourceId));
                        }
                    } else {
                        if (fragment.mInLayout) {
                            throw new IllegalArgumentException(attributeSet.getPositionDescription() + ": Duplicate id 0x" + Integer.toHexString(resourceId) + ", tag " + string + ", or parent id 0x" + Integer.toHexString(id2) + " with another fragment for " + attributeValue);
                        }
                        fragment.mInLayout = true;
                        fragment.mFragmentManager = fragmentManager;
                        FragmentHostCallback fragmentHostCallback2 = fragmentManager.f1933w;
                        fragment.mHost = fragmentHostCallback2;
                        fragment.onInflate((Context) fragmentHostCallback2.f1911e, attributeSet, fragment.mSavedFragmentState);
                        g6 = fragmentManager.g(fragment);
                        if (FragmentManager.M(2)) {
                            Log.v("FragmentManager", "Retained Fragment " + fragment + " has been re-attached via the <fragment> tag: id=0x" + Integer.toHexString(resourceId));
                        }
                    }
                    ViewGroup viewGroup = (ViewGroup) view;
                    p2.c cVar = p2.d.a;
                    Intrinsics.checkNotNullParameter(fragment, "fragment");
                    p2.e eVar = new p2.e(fragment, viewGroup);
                    p2.d.c(eVar);
                    p2.c a = p2.d.a(fragment);
                    if (a.a.contains(p2.b.f16301v) && p2.d.e(a, fragment.getClass(), p2.e.class)) {
                        p2.d.b(a, eVar);
                    }
                    fragment.mContainer = viewGroup;
                    g6.k();
                    g6.j();
                    View view2 = fragment.mView;
                    if (view2 == null) {
                        throw new IllegalStateException(s4.h.f("Fragment ", attributeValue, " did not create a view."));
                    }
                    if (resourceId != 0) {
                        view2.setId(resourceId);
                    }
                    if (fragment.mView.getTag() == null) {
                        fragment.mView.setTag(string);
                    }
                    fragment.mView.addOnAttachStateChangeListener(new n0(this, g6));
                    return fragment.mView;
                }
            }
        }
        return null;
    }
}
