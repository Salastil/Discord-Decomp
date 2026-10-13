package com.swmansion.reanimated.keyboard;

import ah.d;
import android.app.Activity;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.view.View;
import android.widget.FrameLayout;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.j0;
import androidx.core.view.r;
import androidx.core.view.s0;
import com.discord.R;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.devsupport.e;
import java.lang.ref.WeakReference;
import java.util.WeakHashMap;

/* loaded from: classes3.dex */
public class WindowsInsetsManager {
    private final Keyboard mKeyboard;
    private final NotifyAboutKeyboardChangeFunction mNotifyAboutKeyboardChange;
    private final WeakReference<ReactApplicationContext> mReactContext;
    private boolean mIsStatusBarTranslucent = false;
    private boolean mIsNavigationBarTranslucent = false;
    private final String MissingContextErrorMsg = "Unable to get reference to react activity";

    public WindowsInsetsManager(WeakReference<ReactApplicationContext> weakReference, Keyboard keyboard, NotifyAboutKeyboardChangeFunction notifyAboutKeyboardChangeFunction) {
        this.mReactContext = weakReference;
        this.mKeyboard = keyboard;
        this.mNotifyAboutKeyboardChange = notifyAboutKeyboardChangeFunction;
    }

    private Activity getCurrentActivity() {
        return this.mReactContext.get().getCurrentActivity();
    }

    private FrameLayout.LayoutParams getLayoutParams(int i5, int i6) {
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
        if (this.mIsStatusBarTranslucent) {
            i5 = 0;
        }
        if (this.mIsNavigationBarTranslucent) {
            i6 = 0;
        }
        layoutParams.setMargins(0, i5, 0, i6);
        return layoutParams;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$updateInsets$1(int i5, int i6) {
        FrameLayout.LayoutParams layoutParams = getLayoutParams(i5, i6);
        Activity currentActivity = getCurrentActivity();
        if (currentActivity == null) {
            Log.e("Reanimated", "Unable to get reference to react activity");
        } else {
            currentActivity.getWindow().getDecorView().findViewById(R.id.action_bar_root).setLayoutParams(layoutParams);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$updateWindowDecor$0(boolean z5) {
        Activity currentActivity = getCurrentActivity();
        if (currentActivity == null) {
            Log.e("Reanimated", "Unable to get reference to react activity");
        } else {
            d.k(currentActivity.getWindow(), z5);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public WindowInsetsCompat onApplyWindowInsetsListener(View view, WindowInsetsCompat windowInsetsCompat) {
        WindowInsetsCompat k = s0.k(view, windowInsetsCompat);
        if (this.mKeyboard.getState() == KeyboardState.OPEN) {
            this.mKeyboard.updateHeight(windowInsetsCompat, this.mIsNavigationBarTranslucent);
            this.mNotifyAboutKeyboardChange.call();
        }
        setWindowInsets(k);
        return k;
    }

    private void setWindowInsets(WindowInsetsCompat windowInsetsCompat) {
        updateInsets(windowInsetsCompat.a.f(519).f1512b, windowInsetsCompat.a.f(519).f1514d);
    }

    private void updateInsets(int i5, int i6) {
        new Handler(Looper.getMainLooper()).post(new c(this, i5, i6, 0));
    }

    private void updateWindowDecor(boolean z5) {
        new Handler(Looper.getMainLooper()).post(new e(this, z5, 3));
    }

    public void startObservingChanges(KeyboardAnimationCallback keyboardAnimationCallback, boolean z5, boolean z6) {
        this.mIsStatusBarTranslucent = z5;
        this.mIsNavigationBarTranslucent = z6;
        updateWindowDecor(false);
        Activity currentActivity = getCurrentActivity();
        if (currentActivity == null) {
            Log.e("Reanimated", "Unable to get reference to react activity");
            return;
        }
        View decorView = currentActivity.getWindow().getDecorView();
        r rVar = new r() { // from class: com.swmansion.reanimated.keyboard.b
            @Override // androidx.core.view.r
            public final WindowInsetsCompat a(View view, WindowInsetsCompat windowInsetsCompat) {
                WindowInsetsCompat onApplyWindowInsetsListener;
                onApplyWindowInsetsListener = WindowsInsetsManager.this.onApplyWindowInsetsListener(view, windowInsetsCompat);
                return onApplyWindowInsetsListener;
            }
        };
        WeakHashMap weakHashMap = s0.a;
        j0.m(decorView, rVar);
        s0.r(decorView, keyboardAnimationCallback);
    }

    public void stopObservingChanges() {
        updateWindowDecor((this.mIsStatusBarTranslucent || this.mIsNavigationBarTranslucent) ? false : true);
        updateInsets(0, 0);
        Activity currentActivity = getCurrentActivity();
        if (currentActivity == null) {
            Log.e("Reanimated", "Unable to get reference to react activity");
            return;
        }
        View decorView = currentActivity.getWindow().getDecorView();
        s0.r(decorView, null);
        j0.m(decorView, null);
    }
}
