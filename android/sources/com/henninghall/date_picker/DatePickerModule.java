package com.henninghall.date_picker;

import ad.d0;
import android.R;
import android.app.Activity;
import android.app.AlertDialog;
import android.graphics.Color;
import android.util.TypedValue;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.annotation.NonNull;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableMapKeySetIterator;
import com.facebook.react.modules.dialog.AlertFragment;
import com.mkuczera.haptic.d;
import gk.a;
import gk.e;
import gk.f;
import gk.g;
import gk.h;
import gk.i;
import gk.n;
import gs.b;
import java.util.HashSet;
import kk.c;

/* loaded from: classes3.dex */
public class DatePickerModule extends NativeRNDatePickerSpec {
    private final h module;

    public DatePickerModule(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
        b.a(reactApplicationContext);
        h hVar = new h();
        b.a(reactApplicationContext);
        this.module = hVar;
    }

    @Override // com.henninghall.date_picker.NativeRNDatePickerSpec
    public void addListener(String str) {
    }

    @Override // com.henninghall.date_picker.NativeRNDatePickerSpec
    public void closePicker() {
        this.module.a.dismiss();
    }

    @Override // com.henninghall.date_picker.NativeRNDatePickerSpec, com.facebook.react.bridge.NativeModule
    @NonNull
    public String getName() {
        return NativeRNDatePickerSpec.NAME;
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x00e8  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00ec  */
    @Override // com.henninghall.date_picker.NativeRNDatePickerSpec
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void openPicker(ReadableMap readableMap, Callback callback, Callback callback2) {
        int i5;
        String string;
        h hVar = this.module;
        hVar.getClass();
        n nVar = new n(new LinearLayout.LayoutParams(-1, (int) (180 * d.f6615b.getResources().getDisplayMetrics().density)));
        ReadableMapKeySetIterator keySetIterator = readableMap.keySetIterator();
        while (keySetIterator.hasNextKey()) {
            String nextKey = keySetIterator.nextKey();
            Dynamic dynamic = readableMap.getDynamic(nextKey);
            if (!nextKey.equals("style")) {
                try {
                    c cVar = (c) ((i) nVar.f9343e.f7996m).get(nextKey);
                    cVar.a = cVar.a(dynamic);
                    nVar.f9344i.add(nextKey);
                } catch (Exception unused) {
                }
            }
        }
        nVar.b();
        ((HashSet) ((d0) nVar.f9342d.f13144v).f320w).add(new f(hVar));
        a aVar = new a(nVar, 0);
        a aVar2 = new a(nVar, 1);
        String string2 = readableMap.getString("confirmText");
        String string3 = readableMap.getString("cancelText");
        String string4 = readableMap.getString("buttonColor");
        LinearLayout linearLayout = new LinearLayout(d.f6615b);
        linearLayout.setLayoutParams(new LinearLayout.LayoutParams(-1, -2));
        linearLayout.addView(nVar);
        linearLayout.setPadding(0, (int) (20 * d.f6615b.getResources().getDisplayMetrics().density), 0, 0);
        Activity currentActivity = d.f6615b.getCurrentActivity();
        String string5 = readableMap.getString("theme");
        if (string5 != null) {
            if (string5.equals("dark")) {
                i5 = 4;
            } else if (string5.equals("light")) {
                i5 = 5;
            }
            g gVar = new g(currentActivity, i5);
            string = readableMap.getString("textColor");
            String string6 = readableMap.getString(AlertFragment.ARG_TITLE);
            if (string != null) {
                gVar.setTitle(string6);
            } else {
                TextView textView = new TextView(d.f6615b.getCurrentActivity());
                textView.setText(string6);
                TypedValue typedValue = new TypedValue();
                d.f6615b.getCurrentActivity().getTheme().resolveAttribute(R.attr.dialogPreferredPadding, typedValue, true);
                int complexToDimensionPixelSize = TypedValue.complexToDimensionPixelSize(typedValue.data, d.f6615b.getResources().getDisplayMetrics());
                textView.setPadding(complexToDimensionPixelSize, complexToDimensionPixelSize, complexToDimensionPixelSize, 0);
                textView.setTextSize(20.0f);
                textView.setTextColor(Color.parseColor(string));
                gVar.setCustomTitle(textView);
            }
            AlertDialog create = gVar.setCancelable(true).setView(linearLayout).setPositiveButton(string2, new gk.d(aVar, nVar)).setNegativeButton(string3, new gk.c(aVar2)).setOnCancelListener(new gk.b(aVar2)).create();
            create.setOnShowListener(new e(string4, create));
            hVar.a = create;
            create.show();
        }
        i5 = 0;
        g gVar2 = new g(currentActivity, i5);
        string = readableMap.getString("textColor");
        String string62 = readableMap.getString(AlertFragment.ARG_TITLE);
        if (string != null) {
        }
        AlertDialog create2 = gVar2.setCancelable(true).setView(linearLayout).setPositiveButton(string2, new gk.d(aVar, nVar)).setNegativeButton(string3, new gk.c(aVar2)).setOnCancelListener(new gk.b(aVar2)).create();
        create2.setOnShowListener(new e(string4, create2));
        hVar.a = create2;
        create2.show();
    }

    @Override // com.henninghall.date_picker.NativeRNDatePickerSpec
    public void removeListeners(double d6) {
    }
}
