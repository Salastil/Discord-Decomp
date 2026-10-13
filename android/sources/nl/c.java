package nl;

import android.widget.SeekBar;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.UIManagerHelper;

/* loaded from: classes3.dex */
public final class c implements SeekBar.OnSeekBarChangeListener {
    @Override // android.widget.SeekBar.OnSeekBarChangeListener
    public final void onProgressChanged(SeekBar seekBar, int i5, boolean z5) {
        a aVar = (a) seekBar;
        if (i5 < aVar.getLowerLimit()) {
            i5 = aVar.getLowerLimit();
        } else if (i5 > aVar.getUpperLimit()) {
            i5 = aVar.getUpperLimit();
        }
        seekBar.setProgress(i5);
        ReactContext reactContext = (ReactContext) seekBar.getContext();
        if (z5) {
            int id2 = seekBar.getId();
            UIManagerHelper.getEventDispatcherForReactTag(reactContext, id2).dispatchEvent(new b(id2, aVar.c(i5)));
        }
    }

    @Override // android.widget.SeekBar.OnSeekBarChangeListener
    public final void onStartTrackingTouch(SeekBar seekBar) {
        ReactContext reactContext = (ReactContext) seekBar.getContext();
        int id2 = seekBar.getId();
        a aVar = (a) seekBar;
        aVar.f15545w = true;
        UIManagerHelper.getEventDispatcherForReactTag(reactContext, id2).dispatchEvent(new d(id2, aVar.c(seekBar.getProgress()), 1));
    }

    @Override // android.widget.SeekBar.OnSeekBarChangeListener
    public final void onStopTrackingTouch(SeekBar seekBar) {
        ReactContext reactContext = (ReactContext) seekBar.getContext();
        a aVar = (a) seekBar;
        aVar.f15545w = false;
        int id2 = seekBar.getId();
        UIManagerHelper.getEventDispatcherForReactTag(reactContext, id2).dispatchEvent(new d(id2, aVar.c(seekBar.getProgress()), 0));
    }
}
