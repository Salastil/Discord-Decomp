package com.swmansion.reanimated.keyboard;

import androidx.annotation.NonNull;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.c1;
import androidx.core.view.d1;
import androidx.core.view.m1;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes3.dex */
public class KeyboardAnimationCallback extends d1 {
    private static final int CONTENT_TYPE_MASK = 8;
    private final boolean mIsNavigationBarTranslucent;
    private final Keyboard mKeyboard;
    private final NotifyAboutKeyboardChangeFunction mNotifyAboutKeyboardChange;

    public KeyboardAnimationCallback(Keyboard keyboard, NotifyAboutKeyboardChangeFunction notifyAboutKeyboardChangeFunction, boolean z5) {
        super(1);
        this.mNotifyAboutKeyboardChange = notifyAboutKeyboardChangeFunction;
        this.mIsNavigationBarTranslucent = z5;
        this.mKeyboard = keyboard;
    }

    private static boolean isKeyboardAnimation(@NonNull m1 m1Var) {
        return (m1Var.a.c() & CONTENT_TYPE_MASK) != 0;
    }

    @Override // androidx.core.view.d1
    public void onEnd(@NonNull m1 m1Var) {
        if (isKeyboardAnimation(m1Var)) {
            this.mKeyboard.onAnimationEnd();
            this.mNotifyAboutKeyboardChange.call();
        }
    }

    @Override // androidx.core.view.d1
    @NonNull
    public WindowInsetsCompat onProgress(@NonNull WindowInsetsCompat windowInsetsCompat, @NonNull List<m1> list) {
        Iterator<m1> it = list.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            if (isKeyboardAnimation(it.next())) {
                this.mKeyboard.updateHeight(windowInsetsCompat, this.mIsNavigationBarTranslucent);
                this.mNotifyAboutKeyboardChange.call();
                break;
            }
        }
        return windowInsetsCompat;
    }

    @Override // androidx.core.view.d1
    @NonNull
    public c1 onStart(@NonNull m1 m1Var, @NonNull c1 c1Var) {
        if (!isKeyboardAnimation(m1Var)) {
            return c1Var;
        }
        this.mKeyboard.onAnimationStart();
        this.mNotifyAboutKeyboardChange.call();
        return c1Var;
    }
}
