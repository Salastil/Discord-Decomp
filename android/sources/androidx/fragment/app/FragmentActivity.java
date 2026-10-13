package androidx.fragment.app;

import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.os.Bundle;
import android.util.AttributeSet;
import android.view.MenuItem;
import android.view.View;
import androidx.activity.ComponentActivity;
import androidx.activity.contextaware.OnContextAvailableListener;
import androidx.annotation.NonNull;
import androidx.core.app.SharedElementCallback;
import androidx.core.util.Consumer;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleRegistry;
import androidx.loader.app.LoaderManager;
import java.io.FileDescriptor;
import java.io.PrintWriter;

/* loaded from: classes.dex */
public class FragmentActivity extends ComponentActivity implements x0.a {
    static final String LIFECYCLE_TAG = "android:support:lifecycle";
    boolean mCreated;
    boolean mResumed;
    final FragmentController mFragments = new FragmentController(new k0(this));
    final LifecycleRegistry mFragmentLifecycleRegistry = new LifecycleRegistry(this);
    boolean mStopped = true;

    public FragmentActivity() {
        getSavedStateRegistry().c(LIFECYCLE_TAG, new h0(0, this));
        final int i5 = 0;
        addOnConfigurationChangedListener(new Consumer(this) { // from class: androidx.fragment.app.i0

            /* renamed from: b, reason: collision with root package name */
            public final /* synthetic */ FragmentActivity f2023b;

            {
                this.f2023b = this;
            }

            @Override // androidx.core.util.Consumer
            public final void accept(Object obj) {
                switch (i5) {
                    case 0:
                        this.f2023b.mFragments.a();
                        break;
                    default:
                        this.f2023b.mFragments.a();
                        break;
                }
            }
        });
        final int i6 = 1;
        addOnNewIntentListener(new Consumer(this) { // from class: androidx.fragment.app.i0

            /* renamed from: b, reason: collision with root package name */
            public final /* synthetic */ FragmentActivity f2023b;

            {
                this.f2023b = this;
            }

            @Override // androidx.core.util.Consumer
            public final void accept(Object obj) {
                switch (i6) {
                    case 0:
                        this.f2023b.mFragments.a();
                        break;
                    default:
                        this.f2023b.mFragments.a();
                        break;
                }
            }
        });
        addOnContextAvailableListener(new OnContextAvailableListener() { // from class: androidx.fragment.app.j0
            @Override // androidx.activity.contextaware.OnContextAvailableListener
            public final void a(ComponentActivity componentActivity) {
                k0 k0Var = FragmentActivity.this.mFragments.a;
                k0Var.f1913v.b(k0Var, k0Var, null);
            }
        });
    }

    public static boolean d(FragmentManager fragmentManager) {
        Lifecycle.State state = Lifecycle.State.f2137d;
        boolean z5 = false;
        for (Fragment fragment : fragmentManager.f1915c.f()) {
            if (fragment != null) {
                if (fragment.getHost() != null) {
                    z5 |= d(fragment.getChildFragmentManager());
                }
                FragmentViewLifecycleOwner fragmentViewLifecycleOwner = fragment.mViewLifecycleOwner;
                if (fragmentViewLifecycleOwner != null) {
                    fragmentViewLifecycleOwner.b();
                    if (fragmentViewLifecycleOwner.f1954v.f2145d.a(Lifecycle.State.f2140v)) {
                        fragment.mViewLifecycleOwner.f1954v.h();
                        z5 = true;
                    }
                }
                if (fragment.mLifecycleRegistry.f2145d.a(Lifecycle.State.f2140v)) {
                    fragment.mLifecycleRegistry.h();
                    z5 = true;
                }
            }
        }
        return z5;
    }

    public final View dispatchFragmentsOnCreateView(View view, @NonNull String str, @NonNull Context context, @NonNull AttributeSet attributeSet) {
        return this.mFragments.a.f1913v.f1918f.onCreateView(view, str, context, attributeSet);
    }

    @Override // android.app.Activity
    public void dump(@NonNull String str, FileDescriptor fileDescriptor, @NonNull PrintWriter printWriter, String[] strArr) {
        super.dump(str, fileDescriptor, printWriter, strArr);
        if (shouldDumpInternalState(strArr)) {
            printWriter.print(str);
            printWriter.print("Local FragmentActivity ");
            printWriter.print(Integer.toHexString(System.identityHashCode(this)));
            printWriter.println(" State:");
            String str2 = str + "  ";
            printWriter.print(str2);
            printWriter.print("mCreated=");
            printWriter.print(this.mCreated);
            printWriter.print(" mResumed=");
            printWriter.print(this.mResumed);
            printWriter.print(" mStopped=");
            printWriter.print(this.mStopped);
            if (getApplication() != null) {
                LoaderManager.a(this).c(str2, printWriter);
            }
            this.mFragments.a.f1913v.v(str, fileDescriptor, printWriter, strArr);
        }
    }

    @NonNull
    public FragmentManager getSupportFragmentManager() {
        return this.mFragments.a.f1913v;
    }

    @NonNull
    @Deprecated
    public LoaderManager getSupportLoaderManager() {
        return LoaderManager.a(this);
    }

    public void markFragmentsCreated() {
        FragmentManager supportFragmentManager;
        do {
            supportFragmentManager = getSupportFragmentManager();
            Lifecycle.State state = Lifecycle.State.f2137d;
        } while (d(supportFragmentManager));
    }

    @Override // androidx.activity.ComponentActivity, android.app.Activity
    public void onActivityResult(int i5, int i6, Intent intent) {
        this.mFragments.a();
        super.onActivityResult(i5, i6, intent);
    }

    @Deprecated
    public void onAttachFragment(@NonNull Fragment fragment) {
    }

    @Override // androidx.activity.ComponentActivity, x0.h, android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.mFragmentLifecycleRegistry.f(androidx.lifecycle.n.ON_CREATE);
        d1 d1Var = this.mFragments.a.f1913v;
        d1Var.H = false;
        d1Var.I = false;
        d1Var.O.f2014g = false;
        d1Var.u(1);
    }

    @Override // android.app.Activity, android.view.LayoutInflater.Factory2
    public View onCreateView(View view, @NonNull String str, @NonNull Context context, @NonNull AttributeSet attributeSet) {
        View dispatchFragmentsOnCreateView = dispatchFragmentsOnCreateView(view, str, context, attributeSet);
        return dispatchFragmentsOnCreateView == null ? super.onCreateView(view, str, context, attributeSet) : dispatchFragmentsOnCreateView;
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        this.mFragments.a.f1913v.l();
        this.mFragmentLifecycleRegistry.f(androidx.lifecycle.n.ON_DESTROY);
    }

    @Override // androidx.activity.ComponentActivity, android.app.Activity, android.view.Window.Callback
    public boolean onMenuItemSelected(int i5, MenuItem menuItem) {
        if (super.onMenuItemSelected(i5, menuItem)) {
            return true;
        }
        if (i5 == 6) {
            return this.mFragments.a.f1913v.j(menuItem);
        }
        return false;
    }

    @Override // android.app.Activity
    public void onPause() {
        super.onPause();
        this.mResumed = false;
        this.mFragments.a.f1913v.u(5);
        this.mFragmentLifecycleRegistry.f(androidx.lifecycle.n.ON_PAUSE);
    }

    @Override // android.app.Activity
    public void onPostResume() {
        super.onPostResume();
        onResumeFragments();
    }

    @Override // androidx.activity.ComponentActivity, android.app.Activity
    public void onRequestPermissionsResult(int i5, @NonNull String[] strArr, @NonNull int[] iArr) {
        this.mFragments.a();
        super.onRequestPermissionsResult(i5, strArr, iArr);
    }

    @Override // android.app.Activity
    public void onResume() {
        this.mFragments.a();
        super.onResume();
        this.mResumed = true;
        this.mFragments.a.f1913v.z(true);
    }

    public void onResumeFragments() {
        this.mFragmentLifecycleRegistry.f(androidx.lifecycle.n.ON_RESUME);
        d1 d1Var = this.mFragments.a.f1913v;
        d1Var.H = false;
        d1Var.I = false;
        d1Var.O.f2014g = false;
        d1Var.u(7);
    }

    @Override // android.app.Activity
    public void onStart() {
        this.mFragments.a();
        super.onStart();
        this.mStopped = false;
        if (!this.mCreated) {
            this.mCreated = true;
            d1 d1Var = this.mFragments.a.f1913v;
            d1Var.H = false;
            d1Var.I = false;
            d1Var.O.f2014g = false;
            d1Var.u(4);
        }
        this.mFragments.a.f1913v.z(true);
        this.mFragmentLifecycleRegistry.f(androidx.lifecycle.n.ON_START);
        d1 d1Var2 = this.mFragments.a.f1913v;
        d1Var2.H = false;
        d1Var2.I = false;
        d1Var2.O.f2014g = false;
        d1Var2.u(5);
    }

    @Override // android.app.Activity
    public void onStateNotSaved() {
        this.mFragments.a();
    }

    @Override // android.app.Activity
    public void onStop() {
        super.onStop();
        this.mStopped = true;
        markFragmentsCreated();
        d1 d1Var = this.mFragments.a.f1913v;
        d1Var.I = true;
        d1Var.O.f2014g = true;
        d1Var.u(4);
        this.mFragmentLifecycleRegistry.f(androidx.lifecycle.n.ON_STOP);
    }

    public void setEnterSharedElementCallback(SharedElementCallback sharedElementCallback) {
        setEnterSharedElementCallback(sharedElementCallback != null ? new x0.b(sharedElementCallback) : null);
    }

    public void setExitSharedElementCallback(SharedElementCallback sharedElementCallback) {
        setExitSharedElementCallback(sharedElementCallback != null ? new x0.b(sharedElementCallback) : null);
    }

    public void startActivityFromFragment(@NonNull Fragment fragment, @NonNull Intent intent, int i5, Bundle bundle) {
        if (i5 == -1) {
            startActivityForResult(intent, -1, bundle);
        } else {
            fragment.startActivityForResult(intent, i5, bundle);
        }
    }

    @Deprecated
    public void startIntentSenderFromFragment(@NonNull Fragment fragment, @NonNull IntentSender intentSender, int i5, Intent intent, int i6, int i10, int i11, Bundle bundle) {
        if (i5 == -1) {
            startIntentSenderForResult(intentSender, i5, intent, i6, i10, i11, bundle);
        } else {
            fragment.startIntentSenderForResult(intentSender, i5, intent, i6, i10, i11, bundle);
        }
    }

    public void supportFinishAfterTransition() {
        finishAfterTransition();
    }

    public void supportPostponeEnterTransition() {
        postponeEnterTransition();
    }

    public void supportStartPostponedEnterTransition() {
        startPostponedEnterTransition();
    }

    @Override // x0.a
    @Deprecated
    public final void validateRequestPermissionsRequestCode(int i5) {
    }

    @Override // android.app.Activity, android.view.LayoutInflater.Factory
    public View onCreateView(@NonNull String str, @NonNull Context context, @NonNull AttributeSet attributeSet) {
        View dispatchFragmentsOnCreateView = dispatchFragmentsOnCreateView(null, str, context, attributeSet);
        return dispatchFragmentsOnCreateView == null ? super.onCreateView(str, context, attributeSet) : dispatchFragmentsOnCreateView;
    }

    public void startActivityFromFragment(@NonNull Fragment fragment, @NonNull Intent intent, int i5) {
        startActivityFromFragment(fragment, intent, i5, (Bundle) null);
    }
}
