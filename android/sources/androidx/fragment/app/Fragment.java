package androidx.fragment.app;

import android.animation.Animator;
import android.annotation.SuppressLint;
import android.app.Activity;
import android.app.Application;
import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.Intent;
import android.content.IntentSender;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseArray;
import android.view.ContextMenu;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;
import androidx.activity.result.ActivityResultCallback;
import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.ActivityResultRegistry;
import androidx.activity.result.contract.ActivityResultContract;
import androidx.annotation.NonNull;
import androidx.arch.core.util.Function;
import androidx.collection.SparseArrayCompat;
import androidx.core.app.SharedElementCallback;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.LifecycleRegistry;
import androidx.lifecycle.LiveData;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModelProvider$Factory;
import androidx.lifecycle.ViewModelStore;
import androidx.lifecycle.viewmodel.CreationExtras;
import androidx.loader.app.LoaderManager;
import androidx.savedstate.SavedStateRegistry;
import androidx.savedstate.SavedStateRegistryController;
import com.discord.R;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.UUID;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicReference;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class Fragment implements ComponentCallbacks, View.OnCreateContextMenuListener, LifecycleOwner, androidx.lifecycle.d1, androidx.lifecycle.i, d3.e {
    static final int ACTIVITY_CREATED = 4;
    static final int ATTACHED = 0;
    static final int AWAITING_ENTER_EFFECTS = 6;
    static final int AWAITING_EXIT_EFFECTS = 3;
    static final int CREATED = 1;
    static final int INITIALIZING = -1;
    static final int RESUMED = 7;
    static final int STARTED = 5;
    static final Object USE_DEFAULT_TRANSITION = new Object();
    static final int VIEW_CREATED = 2;
    boolean mAdded;
    AnimationInfo mAnimationInfo;
    Bundle mArguments;
    int mBackStackNesting;
    boolean mBeingSaved;
    private boolean mCalled;
    ViewGroup mContainer;
    int mContainerId;
    private int mContentLayoutId;
    ViewModelProvider$Factory mDefaultFactory;
    boolean mDeferStart;
    boolean mDetached;
    int mFragmentId;
    FragmentManager mFragmentManager;
    boolean mFromLayout;
    boolean mHasMenu;
    boolean mHidden;
    boolean mHiddenChanged;
    FragmentHostCallback mHost;
    boolean mInDynamicContainer;
    boolean mInLayout;
    boolean mIsCreated;
    LayoutInflater mLayoutInflater;
    LifecycleRegistry mLifecycleRegistry;
    Fragment mParentFragment;
    boolean mPerformedCreateView;
    Handler mPostponedHandler;
    public String mPreviousWho;
    boolean mRemoving;
    boolean mRestored;
    boolean mRetainInstance;
    boolean mRetainInstanceChangedWhileDetached;
    Bundle mSavedFragmentState;
    SavedStateRegistryController mSavedStateRegistryController;
    Boolean mSavedUserVisibleHint;
    Bundle mSavedViewRegistryState;
    SparseArray<Parcelable> mSavedViewState;
    String mTag;
    Fragment mTarget;
    int mTargetRequestCode;
    boolean mTransitioning;
    View mView;
    FragmentViewLifecycleOwner mViewLifecycleOwner;
    int mState = -1;

    @NonNull
    String mWho = UUID.randomUUID().toString();
    String mTargetWho = null;
    private Boolean mIsPrimaryNavigationFragment = null;

    @NonNull
    FragmentManager mChildFragmentManager = new d1();
    boolean mMenuVisible = true;
    boolean mUserVisibleHint = true;
    Runnable mPostponedDurationRunnable = new a0(this, 0);
    Lifecycle.State mMaxState = Lifecycle.State.f2141w;
    MutableLiveData mViewLifecycleOwnerLiveData = new MutableLiveData();
    private final AtomicInteger mNextLocalRequestCode = new AtomicInteger();
    private final ArrayList<OnPreAttachedListener> mOnPreAttachedListeners = new ArrayList<>();
    private final OnPreAttachedListener mSavedStateAttachListener = new b0(this);

    public static class AnimationInfo {
        public boolean a;

        /* renamed from: b, reason: collision with root package name */
        public int f1887b;

        /* renamed from: c, reason: collision with root package name */
        public int f1888c;

        /* renamed from: d, reason: collision with root package name */
        public int f1889d;

        /* renamed from: e, reason: collision with root package name */
        public int f1890e;

        /* renamed from: f, reason: collision with root package name */
        public int f1891f;

        /* renamed from: g, reason: collision with root package name */
        public ArrayList f1892g;

        /* renamed from: h, reason: collision with root package name */
        public ArrayList f1893h;

        /* renamed from: i, reason: collision with root package name */
        public Object f1894i;
        public Object j;
        public Object k;

        /* renamed from: l, reason: collision with root package name */
        public Object f1895l;

        /* renamed from: m, reason: collision with root package name */
        public Object f1896m;

        /* renamed from: n, reason: collision with root package name */
        public Object f1897n;

        /* renamed from: o, reason: collision with root package name */
        public Boolean f1898o;

        /* renamed from: p, reason: collision with root package name */
        public Boolean f1899p;

        /* renamed from: q, reason: collision with root package name */
        public SharedElementCallback f1900q;

        /* renamed from: r, reason: collision with root package name */
        public SharedElementCallback f1901r;

        /* renamed from: s, reason: collision with root package name */
        public float f1902s;

        /* renamed from: t, reason: collision with root package name */
        public View f1903t;

        /* renamed from: u, reason: collision with root package name */
        public boolean f1904u;
    }

    public static abstract class OnPreAttachedListener {
        public abstract void a();
    }

    public static class SavedState implements Parcelable {

        @NonNull
        public static final Parcelable.Creator<SavedState> CREATOR = new g0();

        /* renamed from: d, reason: collision with root package name */
        public final Bundle f1905d;

        public SavedState(Parcel parcel, ClassLoader classLoader) {
            Bundle readBundle = parcel.readBundle();
            this.f1905d = readBundle;
            if (classLoader == null || readBundle == null) {
                return;
            }
            readBundle.setClassLoader(classLoader);
        }

        @Override // android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        @Override // android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i5) {
            parcel.writeBundle(this.f1905d);
        }
    }

    public Fragment() {
        r();
    }

    @NonNull
    @Deprecated
    public static Fragment instantiate(@NonNull Context context, @NonNull String str) {
        return instantiate(context, str, null);
    }

    public void callStartTransitionListener(boolean z5) {
        ViewGroup viewGroup;
        FragmentManager fragmentManager;
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo != null) {
            animationInfo.f1904u = false;
        }
        if (this.mView == null || (viewGroup = this.mContainer) == null || (fragmentManager = this.mFragmentManager) == null) {
            return;
        }
        c2 j = c2.j(viewGroup, fragmentManager);
        j.l();
        if (z5) {
            this.mHost.f1912i.post(new u(1, j));
        } else {
            j.f();
        }
        Handler handler = this.mPostponedHandler;
        if (handler != null) {
            handler.removeCallbacks(this.mPostponedDurationRunnable);
            this.mPostponedHandler = null;
        }
    }

    @NonNull
    public FragmentContainer createFragmentContainer() {
        return new c0(this);
    }

    public void dump(@NonNull String str, FileDescriptor fileDescriptor, @NonNull PrintWriter printWriter, String[] strArr) {
        printWriter.print(str);
        printWriter.print("mFragmentId=#");
        printWriter.print(Integer.toHexString(this.mFragmentId));
        printWriter.print(" mContainerId=#");
        printWriter.print(Integer.toHexString(this.mContainerId));
        printWriter.print(" mTag=");
        printWriter.println(this.mTag);
        printWriter.print(str);
        printWriter.print("mState=");
        printWriter.print(this.mState);
        printWriter.print(" mWho=");
        printWriter.print(this.mWho);
        printWriter.print(" mBackStackNesting=");
        printWriter.println(this.mBackStackNesting);
        printWriter.print(str);
        printWriter.print("mAdded=");
        printWriter.print(this.mAdded);
        printWriter.print(" mRemoving=");
        printWriter.print(this.mRemoving);
        printWriter.print(" mFromLayout=");
        printWriter.print(this.mFromLayout);
        printWriter.print(" mInLayout=");
        printWriter.println(this.mInLayout);
        printWriter.print(str);
        printWriter.print("mHidden=");
        printWriter.print(this.mHidden);
        printWriter.print(" mDetached=");
        printWriter.print(this.mDetached);
        printWriter.print(" mMenuVisible=");
        printWriter.print(this.mMenuVisible);
        printWriter.print(" mHasMenu=");
        printWriter.println(this.mHasMenu);
        printWriter.print(str);
        printWriter.print("mRetainInstance=");
        printWriter.print(this.mRetainInstance);
        printWriter.print(" mUserVisibleHint=");
        printWriter.println(this.mUserVisibleHint);
        if (this.mFragmentManager != null) {
            printWriter.print(str);
            printWriter.print("mFragmentManager=");
            printWriter.println(this.mFragmentManager);
        }
        if (this.mHost != null) {
            printWriter.print(str);
            printWriter.print("mHost=");
            printWriter.println(this.mHost);
        }
        if (this.mParentFragment != null) {
            printWriter.print(str);
            printWriter.print("mParentFragment=");
            printWriter.println(this.mParentFragment);
        }
        if (this.mArguments != null) {
            printWriter.print(str);
            printWriter.print("mArguments=");
            printWriter.println(this.mArguments);
        }
        if (this.mSavedFragmentState != null) {
            printWriter.print(str);
            printWriter.print("mSavedFragmentState=");
            printWriter.println(this.mSavedFragmentState);
        }
        if (this.mSavedViewState != null) {
            printWriter.print(str);
            printWriter.print("mSavedViewState=");
            printWriter.println(this.mSavedViewState);
        }
        if (this.mSavedViewRegistryState != null) {
            printWriter.print(str);
            printWriter.print("mSavedViewRegistryState=");
            printWriter.println(this.mSavedViewRegistryState);
        }
        Fragment q5 = q(false);
        if (q5 != null) {
            printWriter.print(str);
            printWriter.print("mTarget=");
            printWriter.print(q5);
            printWriter.print(" mTargetRequestCode=");
            printWriter.println(this.mTargetRequestCode);
        }
        printWriter.print(str);
        printWriter.print("mPopDirection=");
        printWriter.println(getPopDirection());
        if (getEnterAnim() != 0) {
            printWriter.print(str);
            printWriter.print("getEnterAnim=");
            printWriter.println(getEnterAnim());
        }
        if (getExitAnim() != 0) {
            printWriter.print(str);
            printWriter.print("getExitAnim=");
            printWriter.println(getExitAnim());
        }
        if (getPopEnterAnim() != 0) {
            printWriter.print(str);
            printWriter.print("getPopEnterAnim=");
            printWriter.println(getPopEnterAnim());
        }
        if (getPopExitAnim() != 0) {
            printWriter.print(str);
            printWriter.print("getPopExitAnim=");
            printWriter.println(getPopExitAnim());
        }
        if (this.mContainer != null) {
            printWriter.print(str);
            printWriter.print("mContainer=");
            printWriter.println(this.mContainer);
        }
        if (this.mView != null) {
            printWriter.print(str);
            printWriter.print("mView=");
            printWriter.println(this.mView);
        }
        if (getAnimatingAway() != null) {
            printWriter.print(str);
            printWriter.print("mAnimatingAway=");
            printWriter.println(getAnimatingAway());
        }
        if (getContext() != null) {
            LoaderManager.a(this).c(str, printWriter);
        }
        printWriter.print(str);
        printWriter.println("Child " + this.mChildFragmentManager + ":");
        this.mChildFragmentManager.v(k0.d.k(str, "  "), fileDescriptor, printWriter, strArr);
    }

    public final boolean equals(Object obj) {
        return super.equals(obj);
    }

    public Fragment findFragmentByWho(@NonNull String str) {
        return str.equals(this.mWho) ? this : this.mChildFragmentManager.f1915c.c(str);
    }

    @NonNull
    public String generateActivityResultKey() {
        return "fragment_" + this.mWho + "_rq#" + this.mNextLocalRequestCode.getAndIncrement();
    }

    public final FragmentActivity getActivity() {
        FragmentHostCallback fragmentHostCallback = this.mHost;
        if (fragmentHostCallback == null) {
            return null;
        }
        return fragmentHostCallback.f1910d;
    }

    public boolean getAllowEnterTransitionOverlap() {
        Boolean bool;
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null || (bool = animationInfo.f1899p) == null) {
            return true;
        }
        return bool.booleanValue();
    }

    public boolean getAllowReturnTransitionOverlap() {
        Boolean bool;
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null || (bool = animationInfo.f1898o) == null) {
            return true;
        }
        return bool.booleanValue();
    }

    public View getAnimatingAway() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return null;
        }
        animationInfo.getClass();
        return null;
    }

    public final Bundle getArguments() {
        return this.mArguments;
    }

    @NonNull
    public final FragmentManager getChildFragmentManager() {
        if (this.mHost != null) {
            return this.mChildFragmentManager;
        }
        throw new IllegalStateException(a3.e.j("Fragment ", this, " has not been attached yet."));
    }

    public Context getContext() {
        FragmentHostCallback fragmentHostCallback = this.mHost;
        if (fragmentHostCallback == null) {
            return null;
        }
        return fragmentHostCallback.f1911e;
    }

    @Override // androidx.lifecycle.i
    @NonNull
    public CreationExtras getDefaultViewModelCreationExtras() {
        Application application;
        Context applicationContext = requireContext().getApplicationContext();
        while (true) {
            if (!(applicationContext instanceof ContextWrapper)) {
                application = null;
                break;
            }
            if (applicationContext instanceof Application) {
                application = (Application) applicationContext;
                break;
            }
            applicationContext = ((ContextWrapper) applicationContext).getBaseContext();
        }
        if (application == null && FragmentManager.M(3)) {
            Log.d("FragmentManager", "Could not find Application instance from Context " + requireContext().getApplicationContext() + ", you will not be able to use AndroidViewModel with the default ViewModelProvider.Factory");
        }
        t2.c cVar = new t2.c(0);
        if (application != null) {
            cVar.b(androidx.lifecycle.a1.f2171d, application);
        }
        cVar.b(androidx.lifecycle.r0.a, this);
        cVar.b(androidx.lifecycle.r0.f2220b, this);
        if (getArguments() != null) {
            cVar.b(androidx.lifecycle.r0.f2221c, getArguments());
        }
        return cVar;
    }

    @NonNull
    public ViewModelProvider$Factory getDefaultViewModelProviderFactory() {
        Application application;
        if (this.mFragmentManager == null) {
            throw new IllegalStateException("Can't access ViewModels from detached fragment");
        }
        if (this.mDefaultFactory == null) {
            Context applicationContext = requireContext().getApplicationContext();
            while (true) {
                if (!(applicationContext instanceof ContextWrapper)) {
                    application = null;
                    break;
                }
                if (applicationContext instanceof Application) {
                    application = (Application) applicationContext;
                    break;
                }
                applicationContext = ((ContextWrapper) applicationContext).getBaseContext();
            }
            if (application == null && FragmentManager.M(3)) {
                Log.d("FragmentManager", "Could not find Application instance from Context " + requireContext().getApplicationContext() + ", you will need CreationExtras to use AndroidViewModel with the default ViewModelProvider.Factory");
            }
            this.mDefaultFactory = new androidx.lifecycle.v0(application, this, getArguments());
        }
        return this.mDefaultFactory;
    }

    public int getEnterAnim() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return 0;
        }
        return animationInfo.f1887b;
    }

    public Object getEnterTransition() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return null;
        }
        return animationInfo.f1894i;
    }

    public SharedElementCallback getEnterTransitionCallback() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return null;
        }
        return animationInfo.f1900q;
    }

    public int getExitAnim() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return 0;
        }
        return animationInfo.f1888c;
    }

    public Object getExitTransition() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return null;
        }
        return animationInfo.k;
    }

    public SharedElementCallback getExitTransitionCallback() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return null;
        }
        return animationInfo.f1901r;
    }

    public View getFocusedView() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return null;
        }
        return animationInfo.f1903t;
    }

    @Deprecated
    public final FragmentManager getFragmentManager() {
        return this.mFragmentManager;
    }

    public final Object getHost() {
        FragmentHostCallback fragmentHostCallback = this.mHost;
        if (fragmentHostCallback == null) {
            return null;
        }
        return fragmentHostCallback.e();
    }

    public final int getId() {
        return this.mFragmentId;
    }

    @NonNull
    public final LayoutInflater getLayoutInflater() {
        LayoutInflater layoutInflater = this.mLayoutInflater;
        return layoutInflater == null ? performGetLayoutInflater(null) : layoutInflater;
    }

    @Override // androidx.lifecycle.LifecycleOwner
    @NonNull
    public Lifecycle getLifecycle() {
        return this.mLifecycleRegistry;
    }

    @NonNull
    @Deprecated
    public LoaderManager getLoaderManager() {
        return LoaderManager.a(this);
    }

    public int getNextTransition() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return 0;
        }
        return animationInfo.f1891f;
    }

    public final Fragment getParentFragment() {
        return this.mParentFragment;
    }

    @NonNull
    public final FragmentManager getParentFragmentManager() {
        FragmentManager fragmentManager = this.mFragmentManager;
        if (fragmentManager != null) {
            return fragmentManager;
        }
        throw new IllegalStateException(a3.e.j("Fragment ", this, " not associated with a fragment manager."));
    }

    public boolean getPopDirection() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return false;
        }
        return animationInfo.a;
    }

    public int getPopEnterAnim() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return 0;
        }
        return animationInfo.f1889d;
    }

    public int getPopExitAnim() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return 0;
        }
        return animationInfo.f1890e;
    }

    public float getPostOnViewCreatedAlpha() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return 1.0f;
        }
        return animationInfo.f1902s;
    }

    public Object getReenterTransition() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return null;
        }
        Object obj = animationInfo.f1895l;
        return obj == USE_DEFAULT_TRANSITION ? getExitTransition() : obj;
    }

    @NonNull
    public final Resources getResources() {
        return requireContext().getResources();
    }

    @Deprecated
    public final boolean getRetainInstance() {
        p2.c cVar = p2.d.a;
        Intrinsics.checkNotNullParameter(this, "fragment");
        Intrinsics.checkNotNullParameter(this, "fragment");
        Intrinsics.checkNotNullParameter(this, "fragment");
        p2.f fVar = new p2.f(this, "Attempting to get retain instance for fragment " + this);
        p2.d.c(fVar);
        p2.c a = p2.d.a(this);
        if (a.a.contains(p2.b.f16303x) && p2.d.e(a, getClass(), p2.f.class)) {
            p2.d.b(a, fVar);
        }
        return this.mRetainInstance;
    }

    public Object getReturnTransition() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return null;
        }
        Object obj = animationInfo.j;
        return obj == USE_DEFAULT_TRANSITION ? getEnterTransition() : obj;
    }

    @Override // d3.e
    @NonNull
    public final SavedStateRegistry getSavedStateRegistry() {
        return this.mSavedStateRegistryController.f2496b;
    }

    public Object getSharedElementEnterTransition() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return null;
        }
        return animationInfo.f1896m;
    }

    public Object getSharedElementReturnTransition() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return null;
        }
        Object obj = animationInfo.f1897n;
        return obj == USE_DEFAULT_TRANSITION ? getSharedElementEnterTransition() : obj;
    }

    @NonNull
    public ArrayList<String> getSharedElementSourceNames() {
        ArrayList<String> arrayList;
        AnimationInfo animationInfo = this.mAnimationInfo;
        return (animationInfo == null || (arrayList = animationInfo.f1892g) == null) ? new ArrayList<>() : arrayList;
    }

    @NonNull
    public ArrayList<String> getSharedElementTargetNames() {
        ArrayList<String> arrayList;
        AnimationInfo animationInfo = this.mAnimationInfo;
        return (animationInfo == null || (arrayList = animationInfo.f1893h) == null) ? new ArrayList<>() : arrayList;
    }

    @NonNull
    public final String getString(int i5) {
        return getResources().getString(i5);
    }

    public final String getTag() {
        return this.mTag;
    }

    @Deprecated
    public final Fragment getTargetFragment() {
        return q(true);
    }

    @Deprecated
    public final int getTargetRequestCode() {
        p2.c cVar = p2.d.a;
        Intrinsics.checkNotNullParameter(this, "fragment");
        Intrinsics.checkNotNullParameter(this, "fragment");
        Intrinsics.checkNotNullParameter(this, "fragment");
        p2.g gVar = new p2.g(this, "Attempting to get target request code from fragment " + this);
        p2.d.c(gVar);
        p2.c a = p2.d.a(this);
        if (a.a.contains(p2.b.E) && p2.d.e(a, getClass(), p2.g.class)) {
            p2.d.b(a, gVar);
        }
        return this.mTargetRequestCode;
    }

    @NonNull
    public final CharSequence getText(int i5) {
        return getResources().getText(i5);
    }

    @Deprecated
    public boolean getUserVisibleHint() {
        return this.mUserVisibleHint;
    }

    public View getView() {
        return this.mView;
    }

    @NonNull
    public LifecycleOwner getViewLifecycleOwner() {
        FragmentViewLifecycleOwner fragmentViewLifecycleOwner = this.mViewLifecycleOwner;
        if (fragmentViewLifecycleOwner != null) {
            return fragmentViewLifecycleOwner;
        }
        throw new IllegalStateException(a3.e.j("Can't access the Fragment View's LifecycleOwner for ", this, " when getView() is null i.e., before onCreateView() or after onDestroyView()"));
    }

    @NonNull
    public LiveData getViewLifecycleOwnerLiveData() {
        return this.mViewLifecycleOwnerLiveData;
    }

    @Override // androidx.lifecycle.d1
    @NonNull
    public ViewModelStore getViewModelStore() {
        if (this.mFragmentManager == null) {
            throw new IllegalStateException("Can't access ViewModels from detached fragment");
        }
        int p3 = p();
        Lifecycle.State state = Lifecycle.State.f2137d;
        if (p3 == 1) {
            throw new IllegalStateException("Calling getViewModelStore() before a Fragment reaches onCreate() when using setMaxLifecycle(INITIALIZED) is not supported");
        }
        HashMap hashMap = this.mFragmentManager.O.f2011d;
        ViewModelStore viewModelStore = (ViewModelStore) hashMap.get(this.mWho);
        if (viewModelStore != null) {
            return viewModelStore;
        }
        ViewModelStore viewModelStore2 = new ViewModelStore();
        hashMap.put(this.mWho, viewModelStore2);
        return viewModelStore2;
    }

    public Activity h() {
        return getActivity();
    }

    @SuppressLint({"KotlinPropertyAccess"})
    public final boolean hasOptionsMenu() {
        return this.mHasMenu;
    }

    public final int hashCode() {
        return super.hashCode();
    }

    public void initState() {
        r();
        this.mPreviousWho = this.mWho;
        this.mWho = UUID.randomUUID().toString();
        this.mAdded = false;
        this.mRemoving = false;
        this.mFromLayout = false;
        this.mInLayout = false;
        this.mRestored = false;
        this.mBackStackNesting = 0;
        this.mFragmentManager = null;
        this.mChildFragmentManager = new d1();
        this.mHost = null;
        this.mFragmentId = 0;
        this.mContainerId = 0;
        this.mTag = null;
        this.mHidden = false;
        this.mDetached = false;
    }

    public final boolean isAdded() {
        return this.mHost != null && this.mAdded;
    }

    public final boolean isDetached() {
        return this.mDetached;
    }

    public final boolean isHidden() {
        if (this.mHidden) {
            return true;
        }
        FragmentManager fragmentManager = this.mFragmentManager;
        if (fragmentManager != null) {
            Fragment fragment = this.mParentFragment;
            fragmentManager.getClass();
            if (fragment == null ? false : fragment.isHidden()) {
                return true;
            }
        }
        return false;
    }

    public final boolean isInBackStack() {
        return this.mBackStackNesting > 0;
    }

    public final boolean isInLayout() {
        return this.mInLayout;
    }

    public final boolean isMenuVisible() {
        if (!this.mMenuVisible) {
            return false;
        }
        if (this.mFragmentManager != null) {
            Fragment fragment = this.mParentFragment;
            if (!(fragment == null ? true : fragment.isMenuVisible())) {
                return false;
            }
        }
        return true;
    }

    public boolean isPostponed() {
        AnimationInfo animationInfo = this.mAnimationInfo;
        if (animationInfo == null) {
            return false;
        }
        return animationInfo.f1904u;
    }

    public final boolean isRemoving() {
        return this.mRemoving;
    }

    public final boolean isResumed() {
        return this.mState >= 7;
    }

    public final boolean isStateSaved() {
        FragmentManager fragmentManager = this.mFragmentManager;
        if (fragmentManager == null) {
            return false;
        }
        return fragmentManager.Q();
    }

    public final boolean isVisible() {
        View view;
        return (!isAdded() || isHidden() || (view = this.mView) == null || view.getWindowToken() == null || this.mView.getVisibility() != 0) ? false : true;
    }

    public void noteStateNotSaved() {
        this.mChildFragmentManager.S();
    }

    public final AnimationInfo o() {
        if (this.mAnimationInfo == null) {
            AnimationInfo animationInfo = new AnimationInfo();
            animationInfo.f1894i = null;
            Object obj = USE_DEFAULT_TRANSITION;
            animationInfo.j = obj;
            animationInfo.k = null;
            animationInfo.f1895l = obj;
            animationInfo.f1896m = null;
            animationInfo.f1897n = obj;
            animationInfo.f1900q = null;
            animationInfo.f1901r = null;
            animationInfo.f1902s = 1.0f;
            animationInfo.f1903t = null;
            this.mAnimationInfo = animationInfo;
        }
        return this.mAnimationInfo;
    }

    @Deprecated
    public void onActivityCreated(Bundle bundle) {
        this.mCalled = true;
    }

    @Deprecated
    public void onActivityResult(int i5, int i6, Intent intent) {
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Fragment " + this + " received the following in onActivityResult(): requestCode: " + i5 + " resultCode: " + i6 + " data: " + intent);
        }
    }

    public void onAttach(@NonNull Context context) {
        this.mCalled = true;
        FragmentHostCallback fragmentHostCallback = this.mHost;
        FragmentActivity fragmentActivity = fragmentHostCallback == null ? null : fragmentHostCallback.f1910d;
        if (fragmentActivity != null) {
            this.mCalled = false;
            onAttach((Activity) fragmentActivity);
        }
    }

    @Deprecated
    public void onAttachFragment(@NonNull Fragment fragment) {
    }

    @Override // android.content.ComponentCallbacks
    public void onConfigurationChanged(@NonNull Configuration configuration) {
        this.mCalled = true;
    }

    public boolean onContextItemSelected(@NonNull MenuItem menuItem) {
        return false;
    }

    public void onCreate(Bundle bundle) {
        this.mCalled = true;
        restoreChildFragmentState();
        FragmentManager fragmentManager = this.mChildFragmentManager;
        if (fragmentManager.f1932v >= 1) {
            return;
        }
        fragmentManager.H = false;
        fragmentManager.I = false;
        fragmentManager.O.f2014g = false;
        fragmentManager.u(1);
    }

    public Animation onCreateAnimation(int i5, boolean z5, int i6) {
        return null;
    }

    public Animator onCreateAnimator(int i5, boolean z5, int i6) {
        return null;
    }

    @Override // android.view.View.OnCreateContextMenuListener
    public void onCreateContextMenu(@NonNull ContextMenu contextMenu, @NonNull View view, ContextMenu.ContextMenuInfo contextMenuInfo) {
        requireActivity().onCreateContextMenu(contextMenu, view, contextMenuInfo);
    }

    @Deprecated
    public void onCreateOptionsMenu(@NonNull Menu menu, @NonNull MenuInflater menuInflater) {
    }

    public View onCreateView(@NonNull LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        int i5 = this.mContentLayoutId;
        if (i5 != 0) {
            return layoutInflater.inflate(i5, viewGroup, false);
        }
        return null;
    }

    public void onDestroy() {
        this.mCalled = true;
    }

    @Deprecated
    public void onDestroyOptionsMenu() {
    }

    public void onDestroyView() {
        this.mCalled = true;
    }

    public void onDetach() {
        this.mCalled = true;
    }

    @NonNull
    public LayoutInflater onGetLayoutInflater(Bundle bundle) {
        return getLayoutInflater(bundle);
    }

    public void onHiddenChanged(boolean z5) {
    }

    public void onInflate(@NonNull Context context, @NonNull AttributeSet attributeSet, Bundle bundle) {
        this.mCalled = true;
        FragmentHostCallback fragmentHostCallback = this.mHost;
        FragmentActivity fragmentActivity = fragmentHostCallback == null ? null : fragmentHostCallback.f1910d;
        if (fragmentActivity != null) {
            this.mCalled = false;
            onInflate((Activity) fragmentActivity, attributeSet, bundle);
        }
    }

    @Override // android.content.ComponentCallbacks
    public void onLowMemory() {
        this.mCalled = true;
    }

    public void onMultiWindowModeChanged(boolean z5) {
    }

    @Deprecated
    public boolean onOptionsItemSelected(@NonNull MenuItem menuItem) {
        return false;
    }

    @Deprecated
    public void onOptionsMenuClosed(@NonNull Menu menu) {
    }

    public void onPause() {
        this.mCalled = true;
    }

    public void onPictureInPictureModeChanged(boolean z5) {
    }

    @Deprecated
    public void onPrepareOptionsMenu(@NonNull Menu menu) {
    }

    public void onPrimaryNavigationFragmentChanged(boolean z5) {
    }

    @Deprecated
    public void onRequestPermissionsResult(int i5, @NonNull String[] strArr, @NonNull int[] iArr) {
    }

    public void onResume() {
        this.mCalled = true;
    }

    public void onSaveInstanceState(@NonNull Bundle bundle) {
    }

    public void onStart() {
        this.mCalled = true;
    }

    public void onStop() {
        this.mCalled = true;
    }

    public void onViewCreated(@NonNull View view, Bundle bundle) {
    }

    public void onViewStateRestored(Bundle bundle) {
        this.mCalled = true;
    }

    public final int p() {
        Lifecycle.State state = this.mMaxState;
        return (state == Lifecycle.State.f2138e || this.mParentFragment == null) ? state.ordinal() : Math.min(state.ordinal(), this.mParentFragment.p());
    }

    public void performActivityCreated(Bundle bundle) {
        this.mChildFragmentManager.S();
        this.mState = 3;
        this.mCalled = false;
        onActivityCreated(bundle);
        if (!this.mCalled) {
            throw new d2(a3.e.j("Fragment ", this, " did not call through to super.onActivityCreated()"));
        }
        if (FragmentManager.M(3)) {
            Log.d("FragmentManager", "moveto RESTORE_VIEW_STATE: " + this);
        }
        if (this.mView != null) {
            Bundle bundle2 = this.mSavedFragmentState;
            restoreViewState(bundle2 != null ? bundle2.getBundle("savedInstanceState") : null);
        }
        this.mSavedFragmentState = null;
        FragmentManager fragmentManager = this.mChildFragmentManager;
        fragmentManager.H = false;
        fragmentManager.I = false;
        fragmentManager.O.f2014g = false;
        fragmentManager.u(4);
    }

    public void performAttach() {
        Iterator<OnPreAttachedListener> it = this.mOnPreAttachedListeners.iterator();
        while (it.hasNext()) {
            it.next().a();
        }
        this.mOnPreAttachedListeners.clear();
        this.mChildFragmentManager.b(this.mHost, createFragmentContainer(), this);
        this.mState = 0;
        this.mCalled = false;
        onAttach((Context) this.mHost.f1911e);
        if (!this.mCalled) {
            throw new d2(a3.e.j("Fragment ", this, " did not call through to super.onAttach()"));
        }
        Iterator it2 = this.mFragmentManager.f1926p.iterator();
        while (it2.hasNext()) {
            ((h1) it2.next()).a(this);
        }
        FragmentManager fragmentManager = this.mChildFragmentManager;
        fragmentManager.H = false;
        fragmentManager.I = false;
        fragmentManager.O.f2014g = false;
        fragmentManager.u(0);
    }

    public void performConfigurationChanged(@NonNull Configuration configuration) {
        onConfigurationChanged(configuration);
    }

    public boolean performContextItemSelected(@NonNull MenuItem menuItem) {
        if (this.mHidden) {
            return false;
        }
        if (onContextItemSelected(menuItem)) {
            return true;
        }
        return this.mChildFragmentManager.j(menuItem);
    }

    public void performCreate(Bundle bundle) {
        this.mChildFragmentManager.S();
        this.mState = 1;
        this.mCalled = false;
        this.mLifecycleRegistry.a(new d0(this));
        onCreate(bundle);
        this.mIsCreated = true;
        if (!this.mCalled) {
            throw new d2(a3.e.j("Fragment ", this, " did not call through to super.onCreate()"));
        }
        this.mLifecycleRegistry.f(androidx.lifecycle.n.ON_CREATE);
    }

    public boolean performCreateOptionsMenu(@NonNull Menu menu, @NonNull MenuInflater menuInflater) {
        boolean z5 = false;
        if (this.mHidden) {
            return false;
        }
        if (this.mHasMenu && this.mMenuVisible) {
            onCreateOptionsMenu(menu, menuInflater);
            z5 = true;
        }
        return this.mChildFragmentManager.k(menu, menuInflater) | z5;
    }

    public void performCreateView(@NonNull LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        this.mChildFragmentManager.S();
        this.mPerformedCreateView = true;
        this.mViewLifecycleOwner = new FragmentViewLifecycleOwner(this, getViewModelStore(), new y(0, this));
        View onCreateView = onCreateView(layoutInflater, viewGroup, bundle);
        this.mView = onCreateView;
        if (onCreateView == null) {
            if (this.mViewLifecycleOwner.f1954v != null) {
                throw new IllegalStateException("Called getViewLifecycleOwner() but onCreateView() returned null");
            }
            this.mViewLifecycleOwner = null;
            return;
        }
        this.mViewLifecycleOwner.b();
        if (FragmentManager.M(3)) {
            Log.d("FragmentManager", "Setting ViewLifecycleOwner on View " + this.mView + " for Fragment " + this);
        }
        androidx.lifecycle.c1.d(this.mView, this.mViewLifecycleOwner);
        View view = this.mView;
        FragmentViewLifecycleOwner fragmentViewLifecycleOwner = this.mViewLifecycleOwner;
        Intrinsics.checkNotNullParameter(view, "<this>");
        view.setTag(R.id.view_tree_view_model_store_owner, fragmentViewLifecycleOwner);
        jb.a.H(this.mView, this.mViewLifecycleOwner);
        this.mViewLifecycleOwnerLiveData.h(this.mViewLifecycleOwner);
    }

    public void performDestroy() {
        this.mChildFragmentManager.l();
        this.mLifecycleRegistry.f(androidx.lifecycle.n.ON_DESTROY);
        this.mState = 0;
        this.mCalled = false;
        this.mIsCreated = false;
        onDestroy();
        if (!this.mCalled) {
            throw new d2(a3.e.j("Fragment ", this, " did not call through to super.onDestroy()"));
        }
    }

    public void performDestroyView() {
        this.mChildFragmentManager.u(1);
        if (this.mView != null) {
            FragmentViewLifecycleOwner fragmentViewLifecycleOwner = this.mViewLifecycleOwner;
            fragmentViewLifecycleOwner.b();
            if (fragmentViewLifecycleOwner.f1954v.f2145d.a(Lifecycle.State.f2139i)) {
                this.mViewLifecycleOwner.a(androidx.lifecycle.n.ON_DESTROY);
            }
        }
        this.mState = 1;
        this.mCalled = false;
        onDestroyView();
        if (!this.mCalled) {
            throw new d2(a3.e.j("Fragment ", this, " did not call through to super.onDestroyView()"));
        }
        SparseArrayCompat sparseArrayCompat = LoaderManager.a(this).f19179b.f19177b;
        int g6 = sparseArrayCompat.g();
        for (int i5 = 0; i5 < g6; i5++) {
            ((v2.a) sparseArrayCompat.h(i5)).j();
        }
        this.mPerformedCreateView = false;
    }

    public void performDetach() {
        this.mState = -1;
        this.mCalled = false;
        onDetach();
        this.mLayoutInflater = null;
        if (!this.mCalled) {
            throw new d2(a3.e.j("Fragment ", this, " did not call through to super.onDetach()"));
        }
        FragmentManager fragmentManager = this.mChildFragmentManager;
        if (fragmentManager.J) {
            return;
        }
        fragmentManager.l();
        this.mChildFragmentManager = new d1();
    }

    @NonNull
    public LayoutInflater performGetLayoutInflater(Bundle bundle) {
        LayoutInflater onGetLayoutInflater = onGetLayoutInflater(bundle);
        this.mLayoutInflater = onGetLayoutInflater;
        return onGetLayoutInflater;
    }

    public void performLowMemory() {
        onLowMemory();
    }

    public void performMultiWindowModeChanged(boolean z5) {
        onMultiWindowModeChanged(z5);
    }

    public boolean performOptionsItemSelected(@NonNull MenuItem menuItem) {
        if (this.mHidden) {
            return false;
        }
        if (this.mHasMenu && this.mMenuVisible && onOptionsItemSelected(menuItem)) {
            return true;
        }
        return this.mChildFragmentManager.p(menuItem);
    }

    public void performOptionsMenuClosed(@NonNull Menu menu) {
        if (this.mHidden) {
            return;
        }
        if (this.mHasMenu && this.mMenuVisible) {
            onOptionsMenuClosed(menu);
        }
        this.mChildFragmentManager.q(menu);
    }

    public void performPause() {
        this.mChildFragmentManager.u(5);
        if (this.mView != null) {
            this.mViewLifecycleOwner.a(androidx.lifecycle.n.ON_PAUSE);
        }
        this.mLifecycleRegistry.f(androidx.lifecycle.n.ON_PAUSE);
        this.mState = 6;
        this.mCalled = false;
        onPause();
        if (!this.mCalled) {
            throw new d2(a3.e.j("Fragment ", this, " did not call through to super.onPause()"));
        }
    }

    public void performPictureInPictureModeChanged(boolean z5) {
        onPictureInPictureModeChanged(z5);
    }

    public boolean performPrepareOptionsMenu(@NonNull Menu menu) {
        boolean z5 = false;
        if (this.mHidden) {
            return false;
        }
        if (this.mHasMenu && this.mMenuVisible) {
            onPrepareOptionsMenu(menu);
            z5 = true;
        }
        return this.mChildFragmentManager.t(menu) | z5;
    }

    public void performPrimaryNavigationFragmentChanged() {
        this.mFragmentManager.getClass();
        boolean P = FragmentManager.P(this);
        Boolean bool = this.mIsPrimaryNavigationFragment;
        if (bool == null || bool.booleanValue() != P) {
            this.mIsPrimaryNavigationFragment = Boolean.valueOf(P);
            onPrimaryNavigationFragmentChanged(P);
            FragmentManager fragmentManager = this.mChildFragmentManager;
            fragmentManager.i0();
            fragmentManager.r(fragmentManager.f1936z);
        }
    }

    public void performResume() {
        this.mChildFragmentManager.S();
        this.mChildFragmentManager.z(true);
        this.mState = 7;
        this.mCalled = false;
        onResume();
        if (!this.mCalled) {
            throw new d2(a3.e.j("Fragment ", this, " did not call through to super.onResume()"));
        }
        LifecycleRegistry lifecycleRegistry = this.mLifecycleRegistry;
        androidx.lifecycle.n nVar = androidx.lifecycle.n.ON_RESUME;
        lifecycleRegistry.f(nVar);
        if (this.mView != null) {
            this.mViewLifecycleOwner.f1954v.f(nVar);
        }
        FragmentManager fragmentManager = this.mChildFragmentManager;
        fragmentManager.H = false;
        fragmentManager.I = false;
        fragmentManager.O.f2014g = false;
        fragmentManager.u(7);
    }

    public void performSaveInstanceState(Bundle bundle) {
        onSaveInstanceState(bundle);
    }

    public void performStart() {
        this.mChildFragmentManager.S();
        this.mChildFragmentManager.z(true);
        this.mState = 5;
        this.mCalled = false;
        onStart();
        if (!this.mCalled) {
            throw new d2(a3.e.j("Fragment ", this, " did not call through to super.onStart()"));
        }
        LifecycleRegistry lifecycleRegistry = this.mLifecycleRegistry;
        androidx.lifecycle.n nVar = androidx.lifecycle.n.ON_START;
        lifecycleRegistry.f(nVar);
        if (this.mView != null) {
            this.mViewLifecycleOwner.f1954v.f(nVar);
        }
        FragmentManager fragmentManager = this.mChildFragmentManager;
        fragmentManager.H = false;
        fragmentManager.I = false;
        fragmentManager.O.f2014g = false;
        fragmentManager.u(5);
    }

    public void performStop() {
        FragmentManager fragmentManager = this.mChildFragmentManager;
        fragmentManager.I = true;
        fragmentManager.O.f2014g = true;
        fragmentManager.u(4);
        if (this.mView != null) {
            this.mViewLifecycleOwner.a(androidx.lifecycle.n.ON_STOP);
        }
        this.mLifecycleRegistry.f(androidx.lifecycle.n.ON_STOP);
        this.mState = 4;
        this.mCalled = false;
        onStop();
        if (!this.mCalled) {
            throw new d2(a3.e.j("Fragment ", this, " did not call through to super.onStop()"));
        }
    }

    public void performViewCreated() {
        Bundle bundle = this.mSavedFragmentState;
        onViewCreated(this.mView, bundle != null ? bundle.getBundle("savedInstanceState") : null);
        this.mChildFragmentManager.u(2);
    }

    public void postponeEnterTransition() {
        o().f1904u = true;
    }

    public final Fragment q(boolean z5) {
        String str;
        if (z5) {
            p2.c cVar = p2.d.a;
            Intrinsics.checkNotNullParameter(this, "fragment");
            Intrinsics.checkNotNullParameter(this, "fragment");
            Intrinsics.checkNotNullParameter(this, "fragment");
            p2.h hVar = new p2.h(this, "Attempting to get target fragment from fragment " + this);
            p2.d.c(hVar);
            p2.c a = p2.d.a(this);
            if (a.a.contains(p2.b.E) && p2.d.e(a, getClass(), p2.h.class)) {
                p2.d.b(a, hVar);
            }
        }
        Fragment fragment = this.mTarget;
        if (fragment != null) {
            return fragment;
        }
        FragmentManager fragmentManager = this.mFragmentManager;
        if (fragmentManager == null || (str = this.mTargetWho) == null) {
            return null;
        }
        return fragmentManager.f1915c.b(str);
    }

    public final void r() {
        this.mLifecycleRegistry = new LifecycleRegistry(this);
        Intrinsics.checkNotNullParameter(this, "owner");
        this.mSavedStateRegistryController = new SavedStateRegistryController(new e3.a(this, new androidx.lifecycle.s0(28, this)));
        this.mDefaultFactory = null;
        if (this.mOnPreAttachedListeners.contains(this.mSavedStateAttachListener)) {
            return;
        }
        OnPreAttachedListener onPreAttachedListener = this.mSavedStateAttachListener;
        if (this.mState >= 0) {
            onPreAttachedListener.a();
        } else {
            this.mOnPreAttachedListeners.add(onPreAttachedListener);
        }
    }

    @NonNull
    public final <I, O> ActivityResultLauncher registerForActivityResult(@NonNull ActivityResultContract activityResultContract, @NonNull ActivityResultCallback activityResultCallback) {
        return s(activityResultContract, new e0(0, this), activityResultCallback);
    }

    public void registerForContextMenu(@NonNull View view) {
        view.setOnCreateContextMenuListener(this);
    }

    @Deprecated
    public final void requestPermissions(@NonNull String[] permissions, int i5) {
        if (this.mHost == null) {
            throw new IllegalStateException(a3.e.j("Fragment ", this, " not attached to Activity"));
        }
        FragmentManager parentFragmentManager = getParentFragmentManager();
        if (parentFragmentManager.E != null) {
            parentFragmentManager.F.addLast(new y0(this.mWho, i5));
            parentFragmentManager.E.a(permissions, null);
        } else {
            parentFragmentManager.f1933w.getClass();
            Intrinsics.checkNotNullParameter(this, "fragment");
            Intrinsics.checkNotNullParameter(permissions, "permissions");
        }
    }

    @NonNull
    public final FragmentActivity requireActivity() {
        FragmentActivity activity = getActivity();
        if (activity != null) {
            return activity;
        }
        throw new IllegalStateException(a3.e.j("Fragment ", this, " not attached to an activity."));
    }

    @NonNull
    public final Bundle requireArguments() {
        Bundle arguments = getArguments();
        if (arguments != null) {
            return arguments;
        }
        throw new IllegalStateException(a3.e.j("Fragment ", this, " does not have any arguments."));
    }

    @NonNull
    public final Context requireContext() {
        Context context = getContext();
        if (context != null) {
            return context;
        }
        throw new IllegalStateException(a3.e.j("Fragment ", this, " not attached to a context."));
    }

    @NonNull
    @Deprecated
    public final FragmentManager requireFragmentManager() {
        return getParentFragmentManager();
    }

    @NonNull
    public final Object requireHost() {
        Object host = getHost();
        if (host != null) {
            return host;
        }
        throw new IllegalStateException(a3.e.j("Fragment ", this, " not attached to a host."));
    }

    @NonNull
    public final Fragment requireParentFragment() {
        Fragment parentFragment = getParentFragment();
        if (parentFragment != null) {
            return parentFragment;
        }
        if (getContext() == null) {
            throw new IllegalStateException(a3.e.j("Fragment ", this, " is not attached to any Fragment or host"));
        }
        throw new IllegalStateException("Fragment " + this + " is not a child Fragment, it is directly attached to " + getContext());
    }

    @NonNull
    public final View requireView() {
        View view = getView();
        if (view != null) {
            return view;
        }
        throw new IllegalStateException(a3.e.j("Fragment ", this, " did not return a View from onCreateView() or this was called before onCreateView()."));
    }

    public void restoreChildFragmentState() {
        Bundle bundle;
        Bundle bundle2 = this.mSavedFragmentState;
        if (bundle2 == null || (bundle = bundle2.getBundle("childFragmentManager")) == null) {
            return;
        }
        this.mChildFragmentManager.Z(bundle);
        FragmentManager fragmentManager = this.mChildFragmentManager;
        fragmentManager.H = false;
        fragmentManager.I = false;
        fragmentManager.O.f2014g = false;
        fragmentManager.u(1);
    }

    public final void restoreViewState(Bundle bundle) {
        SparseArray<Parcelable> sparseArray = this.mSavedViewState;
        if (sparseArray != null) {
            this.mView.restoreHierarchyState(sparseArray);
            this.mSavedViewState = null;
        }
        this.mCalled = false;
        onViewStateRestored(bundle);
        if (!this.mCalled) {
            throw new d2(a3.e.j("Fragment ", this, " did not call through to super.onViewStateRestored()"));
        }
        if (this.mView != null) {
            this.mViewLifecycleOwner.a(androidx.lifecycle.n.ON_CREATE);
        }
    }

    public final z s(ActivityResultContract activityResultContract, Function function, ActivityResultCallback activityResultCallback) {
        if (this.mState > 1) {
            throw new IllegalStateException(a3.e.j("Fragment ", this, " is attempting to registerForActivityResult after being created. Fragments must call registerForActivityResult() before they are created (i.e. initialization, onAttach(), or onCreate())."));
        }
        AtomicReference atomicReference = new AtomicReference();
        f0 f0Var = new f0(this, function, atomicReference, activityResultContract, activityResultCallback);
        if (this.mState >= 0) {
            f0Var.a();
        } else {
            this.mOnPreAttachedListeners.add(f0Var);
        }
        return new z(atomicReference);
    }

    public void setAllowEnterTransitionOverlap(boolean z5) {
        o().f1899p = Boolean.valueOf(z5);
    }

    public void setAllowReturnTransitionOverlap(boolean z5) {
        o().f1898o = Boolean.valueOf(z5);
    }

    public void setAnimations(int i5, int i6, int i10, int i11) {
        if (this.mAnimationInfo == null && i5 == 0 && i6 == 0 && i10 == 0 && i11 == 0) {
            return;
        }
        o().f1887b = i5;
        o().f1888c = i6;
        o().f1889d = i10;
        o().f1890e = i11;
    }

    public void setArguments(Bundle bundle) {
        if (this.mFragmentManager != null && isStateSaved()) {
            throw new IllegalStateException("Fragment already added and state has been saved");
        }
        this.mArguments = bundle;
    }

    public void setEnterSharedElementCallback(SharedElementCallback sharedElementCallback) {
        o().f1900q = sharedElementCallback;
    }

    public void setEnterTransition(Object obj) {
        o().f1894i = obj;
    }

    public void setExitSharedElementCallback(SharedElementCallback sharedElementCallback) {
        o().f1901r = sharedElementCallback;
    }

    public void setExitTransition(Object obj) {
        o().k = obj;
    }

    public void setFocusedView(View view) {
        o().f1903t = view;
    }

    @Deprecated
    public void setHasOptionsMenu(boolean z5) {
        if (this.mHasMenu != z5) {
            this.mHasMenu = z5;
            if (!isAdded() || isHidden()) {
                return;
            }
            this.mHost.h();
        }
    }

    public void setInitialSavedState(SavedState savedState) {
        Bundle bundle;
        if (this.mFragmentManager != null) {
            throw new IllegalStateException("Fragment already added");
        }
        if (savedState == null || (bundle = savedState.f1905d) == null) {
            bundle = null;
        }
        this.mSavedFragmentState = bundle;
    }

    public void setMenuVisibility(boolean z5) {
        if (this.mMenuVisible != z5) {
            this.mMenuVisible = z5;
            if (this.mHasMenu && isAdded() && !isHidden()) {
                this.mHost.h();
            }
        }
    }

    public void setNextTransition(int i5) {
        if (this.mAnimationInfo == null && i5 == 0) {
            return;
        }
        o();
        this.mAnimationInfo.f1891f = i5;
    }

    public void setPopDirection(boolean z5) {
        if (this.mAnimationInfo == null) {
            return;
        }
        o().a = z5;
    }

    public void setPostOnViewCreatedAlpha(float f2) {
        o().f1902s = f2;
    }

    public void setReenterTransition(Object obj) {
        o().f1895l = obj;
    }

    @Deprecated
    public void setRetainInstance(boolean z5) {
        p2.c cVar = p2.d.a;
        Intrinsics.checkNotNullParameter(this, "fragment");
        Intrinsics.checkNotNullParameter(this, "fragment");
        Intrinsics.checkNotNullParameter(this, "fragment");
        p2.j jVar = new p2.j(this, "Attempting to set retain instance for fragment " + this);
        p2.d.c(jVar);
        p2.c a = p2.d.a(this);
        if (a.a.contains(p2.b.f16303x) && p2.d.e(a, getClass(), p2.j.class)) {
            p2.d.b(a, jVar);
        }
        this.mRetainInstance = z5;
        FragmentManager fragmentManager = this.mFragmentManager;
        if (fragmentManager == null) {
            this.mRetainInstanceChangedWhileDetached = true;
        } else if (z5) {
            fragmentManager.O.c(this);
        } else {
            fragmentManager.O.g(this);
        }
    }

    public void setReturnTransition(Object obj) {
        o().j = obj;
    }

    public void setSharedElementEnterTransition(Object obj) {
        o().f1896m = obj;
    }

    public void setSharedElementNames(ArrayList<String> arrayList, ArrayList<String> arrayList2) {
        o();
        AnimationInfo animationInfo = this.mAnimationInfo;
        animationInfo.f1892g = arrayList;
        animationInfo.f1893h = arrayList2;
    }

    public void setSharedElementReturnTransition(Object obj) {
        o().f1897n = obj;
    }

    @Deprecated
    public void setTargetFragment(Fragment targetFragment, int i5) {
        if (targetFragment != null) {
            p2.c cVar = p2.d.a;
            Intrinsics.checkNotNullParameter(this, "violatingFragment");
            Intrinsics.checkNotNullParameter(targetFragment, "targetFragment");
            Intrinsics.checkNotNullParameter(this, "fragment");
            Intrinsics.checkNotNullParameter(targetFragment, "targetFragment");
            Intrinsics.checkNotNullParameter(this, "fragment");
            p2.k kVar = new p2.k(this, "Attempting to set target fragment " + targetFragment + " with request code " + i5 + " for fragment " + this);
            p2.d.c(kVar);
            p2.c a = p2.d.a(this);
            if (a.a.contains(p2.b.E) && p2.d.e(a, getClass(), p2.k.class)) {
                p2.d.b(a, kVar);
            }
        }
        FragmentManager fragmentManager = this.mFragmentManager;
        FragmentManager fragmentManager2 = targetFragment != null ? targetFragment.mFragmentManager : null;
        if (fragmentManager != null && fragmentManager2 != null && fragmentManager != fragmentManager2) {
            throw new IllegalArgumentException(a3.e.j("Fragment ", targetFragment, " must share the same FragmentManager to be set as a target fragment"));
        }
        for (Fragment fragment = targetFragment; fragment != null; fragment = fragment.q(false)) {
            if (fragment.equals(this)) {
                throw new IllegalArgumentException("Setting " + targetFragment + " as the target of " + this + " would create a target cycle");
            }
        }
        if (targetFragment == null) {
            this.mTargetWho = null;
            this.mTarget = null;
        } else if (this.mFragmentManager == null || targetFragment.mFragmentManager == null) {
            this.mTargetWho = null;
            this.mTarget = targetFragment;
        } else {
            this.mTargetWho = targetFragment.mWho;
            this.mTarget = null;
        }
        this.mTargetRequestCode = i5;
    }

    @Deprecated
    public void setUserVisibleHint(boolean z5) {
        p2.c cVar = p2.d.a;
        Intrinsics.checkNotNullParameter(this, "fragment");
        Intrinsics.checkNotNullParameter(this, "fragment");
        p2.l lVar = new p2.l(this, "Attempting to set user visible hint to " + z5 + " for fragment " + this);
        p2.d.c(lVar);
        p2.c a = p2.d.a(this);
        if (a.a.contains(p2.b.f16304y) && p2.d.e(a, getClass(), p2.l.class)) {
            p2.d.b(a, lVar);
        }
        boolean z6 = false;
        if (!this.mUserVisibleHint && z5 && this.mState < 5 && this.mFragmentManager != null && isAdded() && this.mIsCreated) {
            FragmentManager fragmentManager = this.mFragmentManager;
            k1 g6 = fragmentManager.g(this);
            Fragment fragment = g6.f2036c;
            if (fragment.mDeferStart) {
                if (fragmentManager.f1914b) {
                    fragmentManager.K = true;
                } else {
                    fragment.mDeferStart = false;
                    g6.k();
                }
            }
        }
        this.mUserVisibleHint = z5;
        if (this.mState < 5 && !z5) {
            z6 = true;
        }
        this.mDeferStart = z6;
        if (this.mSavedFragmentState != null) {
            this.mSavedUserVisibleHint = Boolean.valueOf(z5);
        }
    }

    public boolean shouldShowRequestPermissionRationale(@NonNull String str) {
        FragmentHostCallback fragmentHostCallback = this.mHost;
        if (fragmentHostCallback != null) {
            return fragmentHostCallback.g(str);
        }
        return false;
    }

    public void startActivity(@NonNull Intent intent) {
        startActivity(intent, null);
    }

    @Deprecated
    public void startActivityForResult(@NonNull Intent intent, int i5) {
        startActivityForResult(intent, i5, null);
    }

    @Deprecated
    public void startIntentSenderForResult(@NonNull IntentSender intent, int i5, Intent intent2, int i6, int i10, int i11, Bundle bundle) {
        if (this.mHost == null) {
            throw new IllegalStateException(a3.e.j("Fragment ", this, " not attached to Activity"));
        }
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Fragment " + this + " received the following in startIntentSenderForResult() requestCode: " + i5 + " IntentSender: " + intent + " fillInIntent: " + intent2 + " options: " + bundle);
        }
        FragmentManager parentFragmentManager = getParentFragmentManager();
        if (parentFragmentManager.D == null) {
            FragmentHostCallback fragmentHostCallback = parentFragmentManager.f1933w;
            fragmentHostCallback.getClass();
            Intrinsics.checkNotNullParameter(this, "fragment");
            Intrinsics.checkNotNullParameter(intent, "intent");
            if (i5 != -1) {
                throw new IllegalStateException("Starting intent sender with a requestCode requires a FragmentActivity host");
            }
            FragmentActivity fragmentActivity = fragmentHostCallback.f1910d;
            if (fragmentActivity == null) {
                throw new IllegalStateException("Starting intent sender with a requestCode requires a FragmentActivity host");
            }
            fragmentActivity.startIntentSenderForResult(intent, i5, intent2, i6, i10, i11, bundle);
            return;
        }
        if (bundle != null) {
            if (intent2 == null) {
                intent2 = new Intent();
                intent2.putExtra("androidx.fragment.extra.ACTIVITY_OPTIONS_BUNDLE", true);
            }
            if (FragmentManager.M(2)) {
                Log.v("FragmentManager", "ActivityOptions " + bundle + " were added to fillInIntent " + intent2 + " for fragment " + this);
            }
            intent2.putExtra("androidx.activity.result.contract.extra.ACTIVITY_OPTIONS_BUNDLE", bundle);
        }
        Intrinsics.checkNotNullParameter(intent, "intentSender");
        f.h hVar = new f.h(intent, intent2, i6, i10);
        parentFragmentManager.F.addLast(new y0(this.mWho, i5));
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Fragment " + this + "is launching an IntentSender for result ");
        }
        parentFragmentManager.D.a(hVar, null);
    }

    public void startPostponedEnterTransition() {
        if (this.mAnimationInfo == null || !o().f1904u) {
            return;
        }
        if (this.mHost == null) {
            o().f1904u = false;
        } else if (Looper.myLooper() != this.mHost.f1912i.getLooper()) {
            this.mHost.f1912i.postAtFrontOfQueue(new a0(this, 1));
        } else {
            callStartTransitionListener(true);
        }
    }

    @NonNull
    public String toString() {
        StringBuilder sb2 = new StringBuilder(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        sb2.append(getClass().getSimpleName());
        sb2.append("{");
        sb2.append(Integer.toHexString(System.identityHashCode(this)));
        sb2.append("} (");
        sb2.append(this.mWho);
        if (this.mFragmentId != 0) {
            sb2.append(" id=0x");
            sb2.append(Integer.toHexString(this.mFragmentId));
        }
        if (this.mTag != null) {
            sb2.append(" tag=");
            sb2.append(this.mTag);
        }
        sb2.append(")");
        return sb2.toString();
    }

    public void unregisterForContextMenu(@NonNull View view) {
        view.setOnCreateContextMenuListener(null);
    }

    @NonNull
    @Deprecated
    public static Fragment instantiate(@NonNull Context context, @NonNull String str, Bundle bundle) {
        try {
            Fragment fragment = (Fragment) u0.b(context.getClassLoader(), str).getConstructor(null).newInstance(null);
            if (bundle == null) {
                return fragment;
            }
            bundle.setClassLoader(fragment.getClass().getClassLoader());
            fragment.setArguments(bundle);
            return fragment;
        } catch (IllegalAccessException e9) {
            throw new ai.k(s4.h.f("Unable to instantiate fragment ", str, ": make sure class name exists, is public, and has an empty constructor that is public"), e9);
        } catch (InstantiationException e10) {
            throw new ai.k(s4.h.f("Unable to instantiate fragment ", str, ": make sure class name exists, is public, and has an empty constructor that is public"), e10);
        } catch (NoSuchMethodException e11) {
            throw new ai.k(s4.h.f("Unable to instantiate fragment ", str, ": could not find Fragment constructor"), e11);
        } catch (InvocationTargetException e12) {
            throw new ai.k(s4.h.f("Unable to instantiate fragment ", str, ": calling Fragment constructor caused an exception"), e12);
        }
    }

    @NonNull
    public final String getString(int i5, Object... objArr) {
        return getResources().getString(i5, objArr);
    }

    public final void postponeEnterTransition(long j, @NonNull TimeUnit timeUnit) {
        o().f1904u = true;
        Handler handler = this.mPostponedHandler;
        if (handler != null) {
            handler.removeCallbacks(this.mPostponedDurationRunnable);
        }
        FragmentManager fragmentManager = this.mFragmentManager;
        if (fragmentManager != null) {
            this.mPostponedHandler = fragmentManager.f1933w.f1912i;
        } else {
            this.mPostponedHandler = new Handler(Looper.getMainLooper());
        }
        this.mPostponedHandler.removeCallbacks(this.mPostponedDurationRunnable);
        this.mPostponedHandler.postDelayed(this.mPostponedDurationRunnable, timeUnit.toMillis(j));
    }

    @NonNull
    public final <I, O> ActivityResultLauncher registerForActivityResult(@NonNull ActivityResultContract activityResultContract, @NonNull ActivityResultRegistry activityResultRegistry, @NonNull ActivityResultCallback activityResultCallback) {
        return s(activityResultContract, new e0(2, activityResultRegistry), activityResultCallback);
    }

    public void startActivity(@NonNull Intent intent, Bundle bundle) {
        FragmentHostCallback fragmentHostCallback = this.mHost;
        if (fragmentHostCallback == null) {
            throw new IllegalStateException(a3.e.j("Fragment ", this, " not attached to Activity"));
        }
        Intrinsics.checkNotNullParameter(this, "fragment");
        Intrinsics.checkNotNullParameter(intent, "intent");
        fragmentHostCallback.f1911e.startActivity(intent, bundle);
    }

    @Deprecated
    public void startActivityForResult(@NonNull Intent intent, int i5, Bundle bundle) {
        if (this.mHost == null) {
            throw new IllegalStateException(a3.e.j("Fragment ", this, " not attached to Activity"));
        }
        FragmentManager parentFragmentManager = getParentFragmentManager();
        if (parentFragmentManager.C != null) {
            parentFragmentManager.F.addLast(new y0(this.mWho, i5));
            if (bundle != null) {
                intent.putExtra("androidx.activity.result.contract.extra.ACTIVITY_OPTIONS_BUNDLE", bundle);
            }
            parentFragmentManager.C.a(intent, null);
            return;
        }
        FragmentHostCallback fragmentHostCallback = parentFragmentManager.f1933w;
        fragmentHostCallback.getClass();
        Intrinsics.checkNotNullParameter(this, "fragment");
        Intrinsics.checkNotNullParameter(intent, "intent");
        if (i5 != -1) {
            throw new IllegalStateException("Starting activity with a requestCode requires a FragmentActivity host");
        }
        fragmentHostCallback.f1911e.startActivity(intent, bundle);
    }

    @NonNull
    @Deprecated
    public LayoutInflater getLayoutInflater(Bundle bundle) {
        FragmentHostCallback fragmentHostCallback = this.mHost;
        if (fragmentHostCallback != null) {
            LayoutInflater f2 = fragmentHostCallback.f();
            f2.setFactory2(this.mChildFragmentManager.f1918f);
            return f2;
        }
        throw new IllegalStateException("onGetLayoutInflater() cannot be executed until the Fragment is attached to the FragmentManager.");
    }

    @Deprecated
    public void onAttach(@NonNull Activity activity) {
        this.mCalled = true;
    }

    @Deprecated
    public void onInflate(@NonNull Activity activity, @NonNull AttributeSet attributeSet, Bundle bundle) {
        this.mCalled = true;
    }
}
