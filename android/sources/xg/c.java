package xg;

import android.graphics.Rect;
import android.graphics.RectF;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.widget.Button;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import com.discord.R;
import com.google.android.material.chip.Chip;
import java.util.ArrayList;
import java.util.List;

/* loaded from: classes3.dex */
public final class c extends androidx.customview.widget.a {
    public final /* synthetic */ Chip a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(Chip chip, Chip chip2) {
        super(chip2);
        this.a = chip;
    }

    @Override // androidx.customview.widget.a
    public final int getVirtualViewAt(float f2, float f10) {
        RectF closeIconTouchBounds;
        Rect rect = Chip.T;
        Chip chip = this.a;
        if (!chip.d()) {
            return 0;
        }
        closeIconTouchBounds = chip.getCloseIconTouchBounds();
        return closeIconTouchBounds.contains(f2, f10) ? 1 : 0;
    }

    @Override // androidx.customview.widget.a
    public final void getVisibleVirtualViews(List list) {
        e eVar;
        ArrayList arrayList = (ArrayList) list;
        arrayList.add(0);
        Rect rect = Chip.T;
        Chip chip = this.a;
        if (!chip.d() || (eVar = chip.f6003w) == null || !eVar.f20449r0 || chip.E == null) {
            return;
        }
        arrayList.add(1);
    }

    @Override // androidx.customview.widget.a
    public final boolean onPerformActionForVirtualView(int i5, int i6, Bundle bundle) {
        boolean z5 = false;
        if (i6 == 16) {
            Chip chip = this.a;
            if (i5 == 0) {
                return chip.performClick();
            }
            if (i5 == 1) {
                chip.playSoundEffect(0);
                View.OnClickListener onClickListener = chip.E;
                if (onClickListener != null) {
                    onClickListener.onClick(chip);
                    z5 = true;
                }
                if (chip.P) {
                    chip.O.sendEventForVirtualView(1, 1);
                }
            }
        }
        return z5;
    }

    @Override // androidx.customview.widget.a
    public final void onPopulateNodeForHost(AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        Chip chip = this.a;
        e eVar = chip.f6003w;
        accessibilityNodeInfoCompat.n(eVar != null && eVar.f20455x0);
        accessibilityNodeInfoCompat.p(chip.isClickable());
        accessibilityNodeInfoCompat.o(chip.getAccessibilityClassName());
        accessibilityNodeInfoCompat.A(chip.getText());
    }

    @Override // androidx.customview.widget.a
    public final void onPopulateNodeForVirtualView(int i5, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        Rect closeIconTouchBoundsInt;
        if (i5 != 1) {
            accessibilityNodeInfoCompat.s("");
            accessibilityNodeInfoCompat.m(Chip.T);
            return;
        }
        Chip chip = this.a;
        CharSequence closeIconContentDescription = chip.getCloseIconContentDescription();
        if (closeIconContentDescription != null) {
            accessibilityNodeInfoCompat.s(closeIconContentDescription);
        } else {
            CharSequence text = chip.getText();
            accessibilityNodeInfoCompat.s(chip.getContext().getString(R.string.mtrl_chip_close_icon_content_description, TextUtils.isEmpty(text) ? "" : text).trim());
        }
        closeIconTouchBoundsInt = chip.getCloseIconTouchBoundsInt();
        accessibilityNodeInfoCompat.m(closeIconTouchBoundsInt);
        accessibilityNodeInfoCompat.b(androidx.core.view.accessibility.a.f1555g);
        accessibilityNodeInfoCompat.a.setEnabled(chip.isEnabled());
        accessibilityNodeInfoCompat.o(Button.class.getName());
    }

    @Override // androidx.customview.widget.a
    public final void onVirtualViewKeyboardFocusChanged(int i5, boolean z5) {
        Chip chip = this.a;
        if (i5 == 1) {
            chip.J = z5;
        }
        e eVar = chip.f6003w;
        boolean z6 = chip.J;
        boolean z7 = false;
        if (eVar.f20450s0 != null) {
            z7 = eVar.W(z6 ? new int[]{android.R.attr.state_pressed, android.R.attr.state_enabled} : e.f20424m1);
        }
        if (z7) {
            chip.refreshDrawableState();
        }
    }
}
