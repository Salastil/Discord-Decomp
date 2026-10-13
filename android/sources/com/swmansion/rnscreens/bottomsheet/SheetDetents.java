package com.swmansion.rnscreens.bottomsheet;

import a3.e;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.ScreenContentWrapper;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class SheetDetents {
    public final List a;

    public SheetDetents(List rawDetents) {
        Intrinsics.checkNotNullParameter(rawDetents, "rawDetents");
        this.a = CollectionsKt.i0(rawDetents);
        if (rawDetents.isEmpty()) {
            throw new IllegalArgumentException("[RNScreens] At least one detent must be provided.");
        }
        if (rawDetents.size() > 3) {
            throw new IllegalArgumentException("[RNScreens] Maximum of 3 detents supported.");
        }
        if (rawDetents.size() == 1) {
            double doubleValue = ((Number) rawDetents.get(0)).doubleValue();
            if ((0.0d > doubleValue || doubleValue > 1.0d) && doubleValue != -1.0d) {
                throw new IllegalArgumentException(("[RNScreens] Detent value must be within 0.0 and 1.0, or SHEET_FIT_TO_CONTENTS should be defined, got " + doubleValue + ".").toString());
            }
            return;
        }
        Iterator it = rawDetents.iterator();
        while (it.hasNext()) {
            double doubleValue2 = ((Number) it.next()).doubleValue();
            if (0.0d > doubleValue2 || doubleValue2 > 1.0d) {
                throw new IllegalArgumentException(("[RNScreens] Detent values must be within 0.0 and 1.0, got " + doubleValue2 + ".").toString());
            }
        }
        if (!Intrinsics.areEqual(rawDetents, CollectionsKt.d0(rawDetents))) {
            throw new IllegalArgumentException("[RNScreens] Detents must be sorted in ascending order.");
        }
    }

    public static int d(Screen screen) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        ScreenContentWrapper contentWrapper = screen.getContentWrapper();
        if (contentWrapper == null) {
            return 0;
        }
        Integer valueOf = Integer.valueOf(contentWrapper.getHeight());
        Intrinsics.checkNotNullParameter(contentWrapper, "<this>");
        if (!contentWrapper.isLaidOut() && contentWrapper.getHeight() <= 0 && contentWrapper.getWidth() <= 0) {
            valueOf = null;
        }
        if (valueOf != null) {
            return valueOf.intValue();
        }
        return 0;
    }

    public final int a(int i5, int i6, boolean z5) {
        List list = this.a;
        if (list.size() < 3) {
            throw new IllegalStateException("[RNScreens] At least 3 detents required for expandedOffsetFromTop.");
        }
        int doubleValue = (int) ((1 - ((Number) list.get(2)).doubleValue()) * i5);
        if (z5) {
            i6 = 0;
        }
        return doubleValue + i6;
    }

    public final int b(int i5, int i6) {
        double doubleValue = ((Number) this.a.get(i5)).doubleValue();
        if (doubleValue != -1.0d) {
            return (int) (doubleValue * i6);
        }
        throw new IllegalArgumentException("[RNScreens] FIT_TO_CONTENTS is not supported by heightAt.");
    }

    public final int c(int i5) {
        return b(this.a.size() - 1, i5);
    }

    public final int e(int i5) {
        int size = this.a.size();
        if (size != 1) {
            if (size != 2) {
                if (size != 3) {
                    throw new IllegalArgumentException(e.f(size, i5, "[RNScreens] Invalid detentCount/index combination ", " / "));
                }
                if (i5 == -1) {
                    return 5;
                }
                if (i5 == 0) {
                    return 4;
                }
                if (i5 == 1) {
                    return 6;
                }
                if (i5 != 2) {
                    throw new IllegalArgumentException(e.f(size, i5, "[RNScreens] Invalid detentCount/index combination ", " / "));
                }
            } else {
                if (i5 == -1) {
                    return 5;
                }
                if (i5 == 0) {
                    return 4;
                }
                if (i5 != 1) {
                    throw new IllegalArgumentException(e.f(size, i5, "[RNScreens] Invalid detentCount/index combination ", " / "));
                }
            }
        } else {
            if (i5 == -1) {
                return 5;
            }
            if (i5 != 0) {
                throw new IllegalArgumentException(e.f(size, i5, "[RNScreens] Invalid detentCount/index combination ", " / "));
            }
        }
        return 3;
    }
}
