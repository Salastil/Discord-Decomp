package ch;

import android.os.Bundle;
import android.view.View;
import android.view.accessibility.AccessibilityEvent;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import com.discord.R;
import com.discord.key_commands.KeyCommandDescriptor;
import com.google.android.material.button.MaterialButton;
import com.google.android.material.button.MaterialButtonToggleGroup;
import com.google.android.material.internal.CheckableImageButton;
import com.google.android.material.internal.NavigationMenuItemView;

/* loaded from: classes3.dex */
public final class a extends androidx.core.view.b {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f3496b;

    public /* synthetic */ a(int i5, Object obj) {
        this.a = i5;
        this.f3496b = obj;
    }

    @Override // androidx.core.view.b
    public void onInitializeAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
        switch (this.a) {
            case 0:
                super.onInitializeAccessibilityEvent(view, accessibilityEvent);
                accessibilityEvent.setChecked(((CheckableImageButton) this.f3496b).f6075v);
                break;
            default:
                super.onInitializeAccessibilityEvent(view, accessibilityEvent);
                break;
        }
    }

    @Override // androidx.core.view.b
    public void onInitializeAccessibilityNodeInfo(View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        int i5 = this.a;
        Object obj = this.f3496b;
        switch (i5) {
            case 0:
                super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
                CheckableImageButton checkableImageButton = (CheckableImageButton) obj;
                accessibilityNodeInfoCompat.n(checkableImageButton.f6076w);
                accessibilityNodeInfoCompat.a.setChecked(checkableImageButton.f6075v);
                break;
            case 1:
                super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
                accessibilityNodeInfoCompat.n(((NavigationMenuItemView) obj).U);
                break;
            case 2:
                super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
                com.google.android.material.datepicker.l lVar = (com.google.android.material.datepicker.l) obj;
                accessibilityNodeInfoCompat.b(new androidx.core.view.accessibility.a(16, lVar.I.getVisibility() == 0 ? lVar.getString(R.string.mtrl_picker_toggle_to_year_selection) : lVar.getString(R.string.mtrl_picker_toggle_to_day_selection)));
                break;
            case 3:
                super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
                if (!((wm.m) obj).G) {
                    accessibilityNodeInfoCompat.a.setDismissable(false);
                    break;
                } else {
                    accessibilityNodeInfoCompat.a(KeyCommandDescriptor.ModifierFlags.COMMAND);
                    accessibilityNodeInfoCompat.a.setDismissable(true);
                    break;
                }
            case 4:
            default:
                super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
                break;
            case 5:
                super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
                MaterialButtonToggleGroup materialButtonToggleGroup = (MaterialButtonToggleGroup) obj;
                int i6 = MaterialButtonToggleGroup.N;
                int i10 = -1;
                if (view instanceof MaterialButton) {
                    int i11 = 0;
                    int i12 = 0;
                    while (true) {
                        if (i11 < materialButtonToggleGroup.getChildCount()) {
                            if (materialButtonToggleGroup.getChildAt(i11) == view) {
                                i10 = i12;
                            } else {
                                if ((materialButtonToggleGroup.getChildAt(i11) instanceof MaterialButton) && materialButtonToggleGroup.getChildAt(i11).getVisibility() != 8) {
                                    i12++;
                                }
                                i11++;
                            }
                        }
                    }
                }
                accessibilityNodeInfoCompat.r(l1.d.a(0, 1, i10, 1, ((MaterialButton) view).L));
                break;
        }
    }

    @Override // androidx.core.view.b
    public void onPopulateAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
        switch (this.a) {
            case 4:
                super.onPopulateAccessibilityEvent(view, accessibilityEvent);
                if (accessibilityEvent.getEventType() == 1) {
                    ((sg.f) this.f3496b).a();
                    break;
                }
                break;
            default:
                super.onPopulateAccessibilityEvent(view, accessibilityEvent);
                break;
        }
    }

    @Override // androidx.core.view.b
    public boolean performAccessibilityAction(View view, int i5, Bundle bundle) {
        switch (this.a) {
            case 3:
                if (i5 == 1048576) {
                    wm.m mVar = (wm.m) this.f3496b;
                    if (mVar.G) {
                        mVar.cancel();
                        break;
                    }
                }
                break;
        }
        return super.performAccessibilityAction(view, i5, bundle);
    }
}
