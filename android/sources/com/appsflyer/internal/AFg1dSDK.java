package com.appsflyer.internal;

import android.graphics.ImageFormat;
import android.telephony.cdma.CdmaCellLocation;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.ViewConfiguration;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

/* loaded from: classes.dex */
public final class AFg1dSDK {
    private StringBuilder getMediationNetwork = new StringBuilder();
    private final List<AFa1uSDK> AFAdRevenueData = new ArrayList();
    private final String getRevenue = null;

    public enum AFa1uSDK {
        EMPTY_ARRAY,
        NONEMPTY_ARRAY,
        EMPTY_OBJECT,
        DANGLING_KEY,
        NONEMPTY_OBJECT,
        NULL
    }

    public final AFg1dSDK AFAdRevenueData(AFa1uSDK aFa1uSDK, String str) {
        if (this.AFAdRevenueData.isEmpty() && this.getMediationNetwork.length() > 0) {
            throw new AFg1jSDK("Nesting problem: multiple top-level roots");
        }
        getMonetizationNetwork();
        this.AFAdRevenueData.add(aFa1uSDK);
        this.getMediationNetwork.append(str);
        return this;
    }

    public final void getCurrencyIso4217Code(String str) {
        this.getMediationNetwork.append("\"");
        int length = str.length();
        for (int i5 = 0; i5 < length; i5++) {
            char charAt = str.charAt(i5);
            if (charAt == '\f') {
                this.getMediationNetwork.append("\\f");
            } else if (charAt == '\r') {
                this.getMediationNetwork.append("\\r");
            } else if (charAt != '\"' && charAt != '/' && charAt != '\\') {
                switch (charAt) {
                    case '\b':
                        this.getMediationNetwork.append("\\b");
                        break;
                    case '\t':
                        this.getMediationNetwork.append("\\t");
                        break;
                    case '\n':
                        this.getMediationNetwork.append("\\n");
                        break;
                    default:
                        if (charAt <= 31) {
                            this.getMediationNetwork.append(String.format("\\u%04x", Integer.valueOf(charAt)));
                            break;
                        } else {
                            this.getMediationNetwork.append(charAt);
                            break;
                        }
                }
            } else {
                StringBuilder sb2 = this.getMediationNetwork;
                sb2.append('\\');
                sb2.append(charAt);
            }
        }
        this.getMediationNetwork.append("\"");
    }

    public final AFg1dSDK getMediationNetwork(AFa1uSDK aFa1uSDK, AFa1uSDK aFa1uSDK2, String str) {
        AFa1uSDK mediationNetwork = getMediationNetwork();
        if (mediationNetwork != aFa1uSDK2 && mediationNetwork != aFa1uSDK) {
            throw new AFg1jSDK("Nesting problem");
        }
        this.AFAdRevenueData.remove(r2.size() - 1);
        this.getMediationNetwork.append(str);
        return this;
    }

    public final AFg1dSDK getMonetizationNetwork(Object obj) {
        if (this.AFAdRevenueData.isEmpty()) {
            throw new AFg1jSDK("Nesting problem");
        }
        if (((Class) AFa1jSDK.AFAdRevenueData((ViewConfiguration.getScrollBarFadeDuration() >> 16) + 321, (char) (56707 - ImageFormat.getBitsPerPixel(0)), MotionEvent.axisFromString("") + 37)).isInstance(obj)) {
            try {
                Object[] objArr = {this};
                Map map = AFa1jSDK.unregisterClient;
                Object obj2 = map.get(1322349739);
                if (obj2 == null) {
                    obj2 = ((Class) AFa1jSDK.AFAdRevenueData((CdmaCellLocation.convertQuartSecToDecDegrees(0) > 0.0d ? 1 : (CdmaCellLocation.convertQuartSecToDecDegrees(0) == 0.0d ? 0 : -1)) + 321, (char) (TextUtils.indexOf((CharSequence) "", '0') + 56709), (ViewConfiguration.getScrollFriction() > 0.0f ? 1 : (ViewConfiguration.getScrollFriction() == 0.0f ? 0 : -1)) + 35)).getDeclaredMethod("getRevenue", AFg1dSDK.class);
                    map.put(1322349739, obj2);
                }
                ((Method) obj2).invoke(obj, objArr);
                return this;
            } catch (Throwable th2) {
                Throwable cause = th2.getCause();
                if (cause != null) {
                    throw cause;
                }
                throw th2;
            }
        }
        if (obj instanceof AFg1gSDK) {
            ((AFg1gSDK) obj).getRevenue(this);
            return this;
        }
        getMonetizationNetwork();
        if (obj == null || (obj instanceof Boolean) || obj == AFg1gSDK.getRevenue) {
            this.getMediationNetwork.append(obj);
            return this;
        }
        if (obj instanceof Number) {
            this.getMediationNetwork.append(AFg1gSDK.getMediationNetwork((Number) obj));
            return this;
        }
        getCurrencyIso4217Code(obj.toString());
        return this;
    }

    public final String toString() {
        if (this.getMediationNetwork.length() == 0) {
            return null;
        }
        return this.getMediationNetwork.toString();
    }

    private AFa1uSDK getMediationNetwork() {
        if (!this.AFAdRevenueData.isEmpty()) {
            return (AFa1uSDK) k0.d.g(1, this.AFAdRevenueData);
        }
        throw new AFg1jSDK("Nesting problem");
    }

    public final void getCurrencyIso4217Code() {
        AFa1uSDK mediationNetwork = getMediationNetwork();
        if (mediationNetwork == AFa1uSDK.NONEMPTY_OBJECT) {
            this.getMediationNetwork.append(',');
        } else if (mediationNetwork != AFa1uSDK.EMPTY_OBJECT) {
            throw new AFg1jSDK("Nesting problem");
        }
        AFa1uSDK aFa1uSDK = AFa1uSDK.DANGLING_KEY;
        this.AFAdRevenueData.set(r1.size() - 1, aFa1uSDK);
    }

    private void getMonetizationNetwork() {
        if (this.AFAdRevenueData.isEmpty()) {
            return;
        }
        AFa1uSDK mediationNetwork = getMediationNetwork();
        if (mediationNetwork == AFa1uSDK.EMPTY_ARRAY) {
            AFa1uSDK aFa1uSDK = AFa1uSDK.NONEMPTY_ARRAY;
            this.AFAdRevenueData.set(r1.size() - 1, aFa1uSDK);
        } else {
            if (mediationNetwork == AFa1uSDK.NONEMPTY_ARRAY) {
                this.getMediationNetwork.append(',');
                return;
            }
            if (mediationNetwork == AFa1uSDK.DANGLING_KEY) {
                this.getMediationNetwork.append(":");
                AFa1uSDK aFa1uSDK2 = AFa1uSDK.NONEMPTY_OBJECT;
                this.AFAdRevenueData.set(r1.size() - 1, aFa1uSDK2);
                return;
            }
            if (mediationNetwork != AFa1uSDK.NULL) {
                throw new AFg1jSDK("Nesting problem");
            }
        }
    }
}
