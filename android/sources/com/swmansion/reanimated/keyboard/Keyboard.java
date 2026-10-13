package com.swmansion.reanimated.keyboard;

import androidx.core.view.WindowInsetsCompat;
import com.facebook.react.uimanager.PixelUtil;

/* loaded from: classes3.dex */
public class Keyboard {
    private static final int CONTENT_TYPE_MASK = 8;
    private static final int SYSTEM_BAR_TYPE_MASK = 519;
    private KeyboardState mState = KeyboardState.UNKNOWN;
    private int mHeight = 0;
    private int mActiveTransitionCounter = 0;

    public int getHeight() {
        return this.mHeight;
    }

    public KeyboardState getState() {
        return this.mState;
    }

    public void onAnimationEnd() {
        int i5 = this.mActiveTransitionCounter - 1;
        this.mActiveTransitionCounter = i5;
        if (i5 == 0) {
            this.mState = this.mHeight <= 0 ? KeyboardState.CLOSED : KeyboardState.OPEN;
        }
    }

    public void onAnimationStart() {
        int i5 = this.mActiveTransitionCounter;
        if (i5 > 0) {
            KeyboardState keyboardState = this.mState;
            KeyboardState keyboardState2 = KeyboardState.OPENING;
            if (keyboardState == keyboardState2) {
                keyboardState2 = KeyboardState.CLOSING;
            }
            this.mState = keyboardState2;
        } else {
            this.mState = this.mHeight <= 0 ? KeyboardState.OPENING : KeyboardState.CLOSING;
        }
        this.mActiveTransitionCounter = i5 + 1;
    }

    public void updateHeight(WindowInsetsCompat windowInsetsCompat, boolean z5) {
        int i5;
        int i6 = windowInsetsCompat.a.f(CONTENT_TYPE_MASK).f1514d;
        if (z5) {
            i5 = 0;
        } else {
            i5 = windowInsetsCompat.a.f(SYSTEM_BAR_TYPE_MASK).f1514d;
        }
        int dIPFromPixel = (int) PixelUtil.toDIPFromPixel(Math.max(0, i6 - i5));
        if (dIPFromPixel > 0 || this.mState != KeyboardState.OPEN) {
            this.mHeight = dIPFromPixel;
        }
    }
}
