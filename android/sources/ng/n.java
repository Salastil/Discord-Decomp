package ng;

import android.R;
import android.animation.ObjectAnimator;
import android.animation.StateListAnimator;
import com.facebook.react.uimanager.ViewProps;

/* loaded from: classes3.dex */
public abstract class n {
    public static final int[] a = {R.attr.stateListAnimator};

    public static void a(g gVar, float f2) {
        int integer = gVar.getResources().getInteger(com.discord.R.integer.app_bar_elevation_anim_duration);
        StateListAnimator stateListAnimator = new StateListAnimator();
        long j = integer;
        stateListAnimator.addState(new int[]{R.attr.state_enabled, com.discord.R.attr.state_liftable, -2130969909}, ObjectAnimator.ofFloat(gVar, ViewProps.ELEVATION, 0.0f).setDuration(j));
        stateListAnimator.addState(new int[]{R.attr.state_enabled}, ObjectAnimator.ofFloat(gVar, ViewProps.ELEVATION, f2).setDuration(j));
        stateListAnimator.addState(new int[0], ObjectAnimator.ofFloat(gVar, ViewProps.ELEVATION, 0.0f).setDuration(0L));
        gVar.setStateListAnimator(stateListAnimator);
    }
}
